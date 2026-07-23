/*
 * XREFs of NtAllocateUuids @ 0x1406DC3C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406DC574 @ 0x1406DC574 (sub_1406DC574.c)
 *     sub_1406DC5A4 @ 0x1406DC5A4 (sub_1406DC5A4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  NTSTATUS v15; // edi
  char v16; // di
  char v17; // bl
  ULONG v19; // [rsp+24h] [rbp-44h] BYREF
  ULONG v20; // [rsp+28h] [rbp-40h] BYREF
  ULONGLONG v21[3]; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-20h]

  v21[0] = 0LL;
  v19 = 0;
  v20 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( *((_BYTE *)CurrentThread + 562) )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      goto LABEL_14;
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v9 = (__int64)Time;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( ((unsigned __int8)Range & 3) != 0 )
      goto LABEL_14;
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Range < 0x7FFFFFFF0000LL )
      v10 = (__int64)Range;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
LABEL_14:
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Sequence < 0x7FFFFFFF0000LL )
      v11 = (__int64)Sequence;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (unsigned __int64)Seed < 0x7FFFFFFF0000LL )
      v8 = (__int64)Seed;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  v12 = KeGetCurrentThread();
  --*((_WORD *)v12 + 242);
  v13 = sub_140347C10((__int64)&qword_140CF6898, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140CF6898, 0LL) )
    sub_14029F120(&qword_140CF6898, v13, (__int64)&qword_140CF6898);
  if ( v14 )
    *(_BYTE *)(v14 + 18) = 1;
  v15 = sub_1406DC5A4(v21, &v19, &v20);
  if ( v15 < 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF6898, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140CF6898);
    sub_1402AFC00((ULONG_PTR)&qword_140CF6898);
    sub_1402F9540((__int64)v12);
    return v15;
  }
  else
  {
    sub_1406DC574();
    v16 = byte_140D3B019;
    v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140CF6898, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140CF6898);
    sub_1402AFC00((ULONG_PTR)&qword_140CF6898);
    sub_1402F9540((__int64)v12);
    *Time = (ULARGE_INTEGER)v21[0];
    *Range = v19;
    *Sequence = v20;
    *(_DWORD *)Seed = *(int *)((char *)&dword_140D3B26C + 2);
    *((_WORD *)Seed + 2) = HIWORD(dword_140D3B270);
    return v16 == 0 ? 0x40020056 : 0;
  }
}
