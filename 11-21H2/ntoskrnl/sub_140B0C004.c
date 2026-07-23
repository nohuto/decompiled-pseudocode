/*
 * XREFs of sub_140B0C004 @ 0x140B0C004
 * Callers:
 *     sub_140B0B9A8 @ 0x140B0B9A8 (sub_140B0B9A8.c)
 * Callees:
 *     sub_1403C47EC @ 0x1403C47EC (sub_1403C47EC.c)
 *     sub_1403C4824 @ 0x1403C4824 (sub_1403C4824.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E08C8 @ 0x1403E08C8 (sub_1403E08C8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140B0C830 @ 0x140B0C830 (sub_140B0C830.c)
 *     sub_140B0CCAC @ 0x140B0CCAC (sub_140B0CCAC.c)
 *     sub_140B0CD58 @ 0x140B0CD58 (sub_140B0CD58.c)
 *     sub_140B0D2E8 @ 0x140B0D2E8 (sub_140B0D2E8.c)
 *     sub_140B0D408 @ 0x140B0D408 (sub_140B0D408.c)
 */

__int64 __fastcall sub_140B0C004(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  unsigned int v4; // r12d
  __int64 v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // r15d
  __int64 Pool2; // rax
  __int64 v9; // rdi
  void *v10; // rcx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rax
  unsigned int v13; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF

  v18 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = sub_140B0CD58(a1, "CallbackDef");
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = sub_140B0D408(a1, "CallbackDef", v2);
      if ( !v5 )
        return 0;
      v6 = sub_140B0C830(a1, "CallbackDef", v2);
      v7 = v6;
      if ( v6 < 2 )
        goto LABEL_19;
      Pool2 = ExAllocatePool2(256LL, (int)(8 * v6 + 56), 0x74694D45u);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v3 = sub_140B0CCAC(a1, "CallbackGuidDef", v5, Pool2, v18, *((_QWORD *)&v18 + 1));
      v10 = (void *)v9;
      if ( v3 < 0 || sub_1403C47EC((_QWORD *)v9) )
        goto LABEL_18;
      *(_DWORD *)(v9 + 64) = v7 - 2;
      v11 = (unsigned __int8 *)sub_140B0D2E8(a1, "CallbackDef", v2, 0LL);
      if ( !v11 )
        goto LABEL_17;
      *(_DWORD *)(v9 + 56) = sub_1403E08C8(v11, 0LL, 0xAu);
      v12 = (unsigned __int8 *)sub_140B0D2E8(a1, "CallbackDef", v2, 1LL);
      if ( !v12 )
        goto LABEL_17;
      v13 = 2;
      *(_DWORD *)(v9 + 60) = sub_1403E08C8(v12, 0LL, 0xAu);
      if ( v7 > 2 )
        break;
LABEL_10:
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_DWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0LL;
      ++dword_140C54CF8;
      *(_QWORD *)(v9 + 40) = qword_140C48C38;
      qword_140C48C38 = v9 + 40;
LABEL_11:
      if ( ++v2 >= v4 )
        return (unsigned int)v3;
    }
    while ( 1 )
    {
      v15 = sub_140B0D2E8(a1, "CallbackDef", v2, v13);
      v3 = ((__int64 (__fastcall *)(__int64, const char *, __int64, __int128 *))sub_140B0CCAC)(
             a1,
             "EntryTypeGuidDef",
             v15,
             &v18);
      if ( v3 < 0 )
        break;
      v16 = sub_1403C4824(&v18);
      if ( !v16 )
        break;
      v17 = v13 - 2;
      ++v13;
      *(_QWORD *)(v9 + 8 * v17 + 72) = v16;
      if ( v13 >= v7 )
        goto LABEL_10;
    }
LABEL_17:
    v10 = (void *)v9;
LABEL_18:
    ExFreePoolWithTag(v10, 0x74694D45u);
LABEL_19:
    v3 = 0;
    goto LABEL_11;
  }
  return (unsigned int)v3;
}
