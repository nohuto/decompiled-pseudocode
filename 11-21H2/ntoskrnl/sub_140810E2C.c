/*
 * XREFs of sub_140810E2C @ 0x140810E2C
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_1407627C8 @ 0x1407627C8 (sub_1407627C8.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_1408620D0 @ 0x1408620D0 (sub_1408620D0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B2D708 @ 0x140B2D708 (sub_140B2D708.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140762AB4 @ 0x140762AB4 (sub_140762AB4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140810E2C(int a1, char a2, const void *a3, size_t a4)
{
  unsigned int v8; // edi
  __int64 Pool2; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax

  v8 = 0;
  if ( sub_140762AB4(a1) )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, a4 + 32, 1718968931LL);
    v10 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 24) = a1;
      if ( (a2 & 1) != 0 )
        *(_BYTE *)(Pool2 + 16) = 1;
      if ( (a2 & 2) != 0 )
        *(_BYTE *)(Pool2 + 17) = 1;
      if ( (a2 & 4) != 0 )
        *(_BYTE *)(Pool2 + 18) = 1;
      if ( (a2 & 8) != 0 )
        *(_BYTE *)(Pool2 + 19) = 1;
      if ( (a2 & 0x10) != 0 )
        *(_BYTE *)(Pool2 + 22) = 1;
      if ( (a2 & 0x20) != 0 )
        *(_BYTE *)(Pool2 + 20) = 1;
      if ( a4 )
      {
        *(_DWORD *)(Pool2 + 28) = a4;
        memmove((void *)(Pool2 + 32), a3, a4);
      }
      v11 = (_QWORD *)qword_140C23038;
      if ( *(__int64 **)qword_140C23038 != &qword_140C23030 )
        __fastfail(3u);
      *v10 = &qword_140C23030;
      v10[1] = v11;
      *v11 = v10;
      qword_140C23038 = (__int64)v10;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
