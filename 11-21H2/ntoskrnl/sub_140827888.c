/*
 * XREFs of sub_140827888 @ 0x140827888
 * Callers:
 *     sub_140825E70 @ 0x140825E70 (sub_140825E70.c)
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 *     sub_140B0EC60 @ 0x140B0EC60 (sub_140B0EC60.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     sub_140827AA8 @ 0x140827AA8 (sub_140827AA8.c)
 *     sub_140A22A30 @ 0x140A22A30 (sub_140A22A30.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140827888(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  __int64 Pool2; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // rax
  NTSTATUS v12; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  struct _ERESOURCE *v15; // rax
  struct _ERESOURCE *v16; // r14

  *a7 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 528LL, 1380994640LL);
  v8 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v9 = (_QWORD *)(Pool2 + 8);
    *(_DWORD *)Pool2 = 167772160;
    *(_BYTE *)(Pool2 + 4) = 0;
    v10 = 4LL;
    *(_QWORD *)(Pool2 + 16) = Pool2 + 8;
    v11 = (_QWORD *)(Pool2 + 24);
    *v9 = v9;
    do
    {
      v11[1] = v11;
      *v11 = v11;
      v11 += 2;
      --v10;
    }
    while ( v10 );
    v12 = sub_140827AA8(v8, L"SYSTEM", 1LL);
    if ( v12 >= 0 )
    {
      v13 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v13 != v9
        || (MEMORY[8] = v9[1], MEMORY[0] = v9, *v13 = 0LL, v9[1] = 0LL, v14 = (_QWORD *)v8[6], (_QWORD *)*v14 != v8 + 5) )
      {
        __fastfail(3u);
      }
      MEMORY[0x18] = v8[6];
      MEMORY[0x10] = v8 + 5;
      *v14 = 16LL;
      v8[6] = 16LL;
      v8[11] = 0LL;
      v8[28] = MEMORY[0x38];
      v15 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1380994640LL);
      v16 = v15;
      if ( v15 )
      {
        v12 = ExInitializeResourceLite(v15);
        if ( v12 < 0 )
        {
          ExFreePoolWithTag(v16, 0);
        }
        else
        {
          v8[30] = v16;
          v8[29] = 0LL;
          v8[61] = 0LL;
          v8[62] = 0LL;
          v8[63] = 0LL;
          v8[64] = 0LL;
          v8[65] = 0LL;
          v8[38] = sub_1407855F0;
          v8[39] = sub_1406BD260;
          v8[40] = sub_140785470;
          v8[41] = sub_140787620;
          v8[42] = sub_14076D160;
          v8[43] = sub_14083D8B0;
          *a7 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v12 = -1073741801;
      }
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v12;
}
