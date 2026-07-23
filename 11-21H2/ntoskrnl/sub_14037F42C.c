/*
 * XREFs of sub_14037F42C @ 0x14037F42C
 * Callers:
 *     sub_14037F1D4 @ 0x14037F1D4 (sub_14037F1D4.c)
 *     sub_14039423C @ 0x14039423C (sub_14039423C.c)
 *     sub_1405F9E38 @ 0x1405F9E38 (sub_1405F9E38.c)
 * Callees:
 *     sub_1403836FC @ 0x1403836FC (sub_1403836FC.c)
 */

__int64 __fastcall sub_14037F42C(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  _DWORD *v7; // rax

  v2 = *(_DWORD *)(a2 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v2 - 1));
    v4[1] -= 4LL;
    v5 = *v4 + 16LL;
    if ( v4[1] < v5 )
    {
      v4[1] = v5;
      v7 = (_DWORD *)sub_1403836FC(a1, a2, 2LL);
      if ( v7 )
      {
        v3 = -1LL;
        if ( v7 != (_DWORD *)-1LL )
        {
          v3 = (__int64)&v7[(unsigned __int16)*v7 + 3];
          v4[1] = v3;
        }
      }
    }
    else
    {
      return v4[1];
    }
  }
  return v3;
}
