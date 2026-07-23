/*
 * XREFs of sub_140533030 @ 0x140533030
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140531778 @ 0x140531778 (sub_140531778.c)
 */

__int64 __fastcall sub_140533030(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r10
  ULONG_PTR *v5; // rax

  v4 = a4 & 0xFFFFFFFFFF000LL;
  if ( a4 )
    v4 = a4 & 0xFFFFFFFFFF000LL | 1;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * ((unsigned __int64)a3 >> 9) + 4096) + 8LL * (a3 & 0x1FF)) = v4;
  if ( !a4 )
  {
    v5 = (ULONG_PTR *)sub_140531778(a1, a3);
    if ( v5 )
      KeBugCheckEx(0x159u, 0x2000uLL, (ULONG_PTR)v5, *v5, v5[1]);
  }
  return 0LL;
}
