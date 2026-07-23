/*
 * XREFs of sub_140A8CA78 @ 0x140A8CA78
 * Callers:
 *     sub_140A802F0 @ 0x140A802F0 (sub_140A802F0.c)
 *     sub_140A80ACC @ 0x140A80ACC (sub_140A80ACC.c)
 *     sub_140A80B3C @ 0x140A80B3C (sub_140A80B3C.c)
 * Callees:
 *     sub_1402ABBD0 @ 0x1402ABBD0 (sub_1402ABBD0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1405FF5A0 @ 0x1405FF5A0 (sub_1405FF5A0.c)
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_140A8BD60 @ 0x140A8BD60 (sub_140A8BD60.c)
 *     sub_140A97FF4 @ 0x140A97FF4 (sub_140A97FF4.c)
 */

__int64 __fastcall sub_140A8CA78(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  ULONG *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  ULONG_PTR v11; // rcx

  v3 = 0LL;
  if ( !a1 )
    return sub_140A97FF4(a3);
  if ( !sub_1402ABBD0() && (qword_140D01450 & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
    BugCheckParameter1 = 193LL;
    *(_QWORD *)&BugCheckCode = 196LL;
    qword_140D57540 = *(_QWORD *)(a1 + 48);
    *(_OWORD *)&xmmword_140D57548 = 0LL;
    sub_1405FF5A0();
  }
  sub_140A97FF4(a3);
  if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() && (qword_140D01450 & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
    qword_140D57540 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&BugCheckCode = 201LL;
    BugCheckParameter1 = 18LL;
    do
    {
      *((_QWORD *)&BugCheckCode + v3 + 3) = *(unsigned __int8 *)(a1 + v3 + 156);
      ++v3;
    }
    while ( v3 < 2 );
    sub_1405FF5A0();
  }
  if ( *(_DWORD *)(a1 + 188) != *((_DWORD *)KeGetCurrentThread() + 121) && (qword_140D01450 & 0x400000) == 0 )
  {
    *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&qword_140D57560);
    v8 = &BugCheckCode;
    v9 = 196LL;
    v10 = 2LL;
    do
    {
      *(_QWORD *)v8 = v9++;
      v8 += 2;
      --v10;
    }
    while ( v10 );
    qword_140D57540 = *(_QWORD *)(a1 + 48);
    v11 = *((unsigned int *)KeGetCurrentThread() + 121);
    *(&xmmword_140D57548 + 1) = *(unsigned int *)(a1 + 188);
    xmmword_140D57548 = v11;
    sub_1405FF5A0();
  }
  result = *(unsigned int *)(a1 + 152);
  if ( (dword_140C29FC0 & 0x10) != 0 && (result & 2) != 0 && *a2 == 259 )
    return sub_1405FFB44(0x307u, *(const void **)(a1 + 176), *(const void **)(a1 + 168));
  if ( (result & 1) != 0 )
    return (__int64)sub_140A8BD60((__int64 *)a1, a2);
  return result;
}
