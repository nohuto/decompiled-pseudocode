/*
 * XREFs of sub_140853E30 @ 0x140853E30
 * Callers:
 *     sub_140853D00 @ 0x140853D00 (sub_140853D00.c)
 *     sub_1409A13E0 @ 0x1409A13E0 (sub_1409A13E0.c)
 *     sub_1409A14A0 @ 0x1409A14A0 (sub_1409A14A0.c)
 * Callees:
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 *     sub_140853F14 @ 0x140853F14 (sub_140853F14.c)
 *     sub_140854148 @ 0x140854148 (sub_140854148.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140853E30(__int64 a1, __int128 *a2, struct _DEVICE_OBJECT *a3, _QWORD *a4)
{
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  __int128 v10; // xmm0
  int v11; // ebx

  if ( a1 && a2 && a3 && a4 )
  {
    Pool2 = ExAllocatePool2(256LL, 96LL, *(unsigned int *)(a1 + 24));
    v9 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = 0;
      *(_QWORD *)Pool2 = a1;
      v10 = *a2;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_BYTE *)(Pool2 + 88) = 1;
      *(_OWORD *)(Pool2 + 16) = v10;
      v11 = sub_140854148(a3);
      if ( v11 < 0 || (v11 = sub_140853F14(a3), v11 < 0) )
      {
        sub_1407F15C0(v9);
      }
      else
      {
        *a4 = v9;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
