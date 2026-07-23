/*
 * XREFs of sub_14050E490 @ 0x14050E490
 * Callers:
 *     sub_140A5A7C8 @ 0x140A5A7C8 (sub_140A5A7C8.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void sub_14050E490()
{
  unsigned __int64 v0; // rax
  ULONG_PTR v1; // rbx
  int *v2; // rdi
  int v3; // ebx
  int v4; // esi
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbx

  if ( !byte_140C4C710 )
  {
    if ( !byte_140C549B0 )
    {
      v0 = __readmsr(0x179u);
      byte_140C549B0 = v0;
    }
    v1 = 4LL * (unsigned __int8)byte_140C549B0;
    dword_140C4C708 = (unsigned __int8)byte_140C549B0;
    if ( v1 )
    {
      qword_140C4C720 = sub_1403B1F04((unsigned __int8)byte_140C549B0, 4LL * (unsigned __int8)byte_140C549B0);
      v2 = (int *)qword_140C4C720;
      if ( !qword_140C4C720 )
        KeBugCheckEx(0xACu, v1, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x63EuLL);
      if ( dword_140C4C708 )
      {
        v3 = 1025;
        v4 = -1073733631;
        v5 = (unsigned int)dword_140C4C708;
        do
        {
          if ( sub_1403AAE50() != 1 || (v6 = v4, !byte_140D016E8) )
            v6 = v3;
          *v2 = v6;
          v4 += 16;
          ++v2;
          v3 += 4;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      qword_140C4C720 = 0LL;
    }
    dword_140C4C70C = sub_1403B3BA0();
    v8 = 8 * (unsigned int)dword_140C4C708 * (unsigned __int64)(unsigned int)dword_140C4C70C;
    if ( v8 )
    {
      qword_140C4C718 = sub_1403B1F04(v7, v8);
      if ( !qword_140C4C718 )
        KeBugCheckEx(0xACu, v8, 0LL, (ULONG_PTR)"minkernel\\hals\\lib\\hv\\hvintel.c", 0x658uLL);
    }
    else
    {
      qword_140C4C718 = 0LL;
    }
    byte_140C4C710 = 1;
  }
}
