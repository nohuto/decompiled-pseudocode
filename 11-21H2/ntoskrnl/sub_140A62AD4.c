/*
 * XREFs of sub_140A62AD4 @ 0x140A62AD4
 * Callers:
 *     sub_140A62BC0 @ 0x140A62BC0 (sub_140A62BC0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void sub_140A62AD4()
{
  ULONG_PTR *v0; // rcx
  ULONG_PTR *v1; // r9
  __int64 **v2; // r9
  __int64 *v3; // rdx
  __int64 *v4; // r11
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rax
  ULONG_PTR v8; // r8

  v0 = (ULONG_PTR *)qword_140C4DE70;
  while ( v0 != &qword_140C4DE70 )
  {
    v1 = v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = (__int64 **)(v1 + 31);
    v3 = *v2;
    while ( v3 != (__int64 *)v2 )
    {
      v4 = v3;
      v5 = 0LL;
      v6 = *((_DWORD *)v3 + 6) - *((_DWORD *)v3 + 5);
      v3 = (__int64 *)*v3;
      if ( v6 > 0 )
      {
        v7 = v6;
        v8 = v4[6];
        do
        {
          if ( *(_BYTE *)(v8 + 2) )
            KeBugCheckEx(0x5Cu, 0x4000uLL, v8, 0LL, 0LL);
          ++v5;
          v8 += 16LL;
        }
        while ( v5 < v7 );
      }
    }
  }
}
