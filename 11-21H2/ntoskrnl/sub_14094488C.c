/*
 * XREFs of sub_14094488C @ 0x14094488C
 * Callers:
 *     sub_1407D5E30 @ 0x1407D5E30 (sub_1407D5E30.c)
 *     sub_140944C08 @ 0x140944C08 (sub_140944C08.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14078D340 @ 0x14078D340 (sub_14078D340.c)
 *     sub_14078D3DC @ 0x14078D3DC (sub_14078D3DC.c)
 */

__int64 __fastcall sub_14094488C(__int64 (__fastcall __far *Source1)(), _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // esi
  PVOID *v7; // rdi
  PVOID **v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int128 v10; // xmm0
  int v11; // ebx
  PVOID **v12; // rsi
  PVOID **v13; // rbx
  struct _KTHREAD *v14; // rax
  int v16; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v17[20]; // [rsp+28h] [rbp-28h] BYREF

  v16 = 0;
  memset(v17, 0, sizeof(v17));
  v4 = 0;
  ExAcquireFastMutex(&stru_140C46980);
  v7 = (PVOID *)qword_140D3CEB8;
  while ( v7 != &qword_140D3CEB8 )
  {
    ++*((_WORD *)v7 + 28);
    v8 = (PVOID **)v7;
    KeReleaseGuardedMutex(&stru_140C46980);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
    if ( *((_BYTE *)v7 + 58) )
    {
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegion();
      v4 = v16;
    }
    else
    {
      v10 = *(_OWORD *)Source1;
      *(_DWORD *)v17 = 1310721;
      *(_OWORD *)&v17[4] = v10;
      v11 = sub_14078D3DC((__int64)v7, (__int64)v17, &v16);
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegion();
      v4 = v16;
      if ( v11 < 0 )
        v4 = 0;
      v16 = v4;
      if ( v4 < 0 && (Source1 == sub_14003A3A0 || RtlCompareMemory(Source1, sub_14003A3A0, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)((char *)v7[6] + 56));
        }
        *(_WORD *)&v17[2] = 16;
        v12 = (PVOID **)v7;
        *(_OWORD *)&v17[4] = xmmword_140014AB0;
        ExAcquireFastMutex(&stru_140C46980);
        do
        {
          ++*((_WORD *)v7 + 28);
          v13 = (PVOID **)v7;
          KeReleaseGuardedMutex(&stru_140C46980);
          v14 = KeGetCurrentThread();
          --*((_WORD *)v14 + 242);
          ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
          if ( !*((_BYTE *)v7 + 58) )
            sub_14078D3DC((__int64)v7, (__int64)v17, 0LL);
          ExReleaseResourceLite((PERESOURCE)v7[9]);
          KeLeaveCriticalRegion();
          ExAcquireFastMutex(&stru_140C46980);
          v7 = (PVOID *)v7[1];
          sub_14078D340(v13);
          if ( v13 == v12 )
            sub_14078D340(v13);
        }
        while ( v7 != &qword_140D3CEB8 );
        v4 = v16;
        break;
      }
    }
    ExAcquireFastMutex(&stru_140C46980);
    v7 = (PVOID *)*v7;
    sub_14078D340(v8);
  }
  KeReleaseGuardedMutex(&stru_140C46980);
  return (unsigned int)v4;
}
