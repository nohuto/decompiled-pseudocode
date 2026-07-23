/*
 * XREFs of sub_140B16904 @ 0x140B16904
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B169F0 @ 0x140B169F0 (sub_140B169F0.c)
 *     sub_140B16B94 @ 0x140B16B94 (sub_140B16B94.c)
 */

__int64 __fastcall sub_140B16904(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  ACL *v7; // rax
  ACL *v8; // rdi
  int v9; // eax
  _QWORD **v10; // rax
  _QWORD *v11; // r14

  v2 = 0;
  if ( a2 )
  {
    v7 = sub_140834D0C();
    v8 = v7;
    if ( v7 )
    {
      v9 = sub_140B169F0(a1, v7);
      v2 = v9;
      if ( v9 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0xCuLL, v9, 0LL);
      v10 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
      v11 = *v10;
      while ( v11 != v10 )
      {
        sub_140B16B94(v11, v8);
        v11 = (_QWORD *)*v11;
        v10 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
      }
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    qword_140C49818 = (__int64)&qword_140C49810;
    qword_140C49810 = (__int64)&qword_140C49810;
    v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    v5 = *v4;
    while ( v5 != v4 )
    {
      ++dword_140C097B8;
      v5 = (_QWORD *)*v5;
      v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    }
  }
  return v2;
}
