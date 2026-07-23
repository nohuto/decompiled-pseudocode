/*
 * XREFs of sub_14091FCD8 @ 0x14091FCD8
 * Callers:
 *     sub_14090CFF8 @ 0x14090CFF8 (sub_14090CFF8.c)
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_14065B108 @ 0x14065B108 (sub_14065B108.c)
 *     sub_14065DBC8 @ 0x14065DBC8 (sub_14065DBC8.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407221B0 @ 0x1407221B0 (sub_1407221B0.c)
 *     sub_14079B920 @ 0x14079B920 (sub_14079B920.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_1409207EC @ 0x1409207EC (sub_1409207EC.c)
 */

__int64 __fastcall sub_14091FCD8(
        ULONG_PTR BugCheckParameter3,
        int a2,
        _DWORD *a3,
        struct _LOOKASIDE_LIST_EX *a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v8; // rax
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  int v12; // ebx
  unsigned int v13; // r14d
  ULONG_PTR v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // r13
  unsigned int *v18; // rsi
  ULONG_PTR v19; // rdx
  ULONG_PTR v20; // rax
  __int16 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-28h] BYREF
  unsigned int *v25; // [rsp+50h] [rbp-20h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-18h]
  __int128 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v29; // [rsp+C0h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp+58h]

  BugCheckParameter3a = (ULONG_PTR)a4;
  LODWORD(v28) = a2;
  v6 = 0;
  v8 = a6;
  v24 = 0xFFFFFFFFLL;
  v23 = 0xFFFFFFFFLL;
  v10 = a3[15];
  LODWORD(v29) = 0;
  LODWORD(v28) = 0;
  v27 = 0LL;
  if ( *(_DWORD *)(a6 + 60) < v10 )
    *(_DWORD *)(a6 + 60) = v10;
  v11 = a3[16];
  if ( *(_DWORD *)(v8 + 64) < v11 )
    *(_DWORD *)(v8 + 64) = v11;
  v25 = (unsigned int *)(v8 + 36);
  if ( *(_DWORD *)(v8 + 36) )
  {
    v13 = a3[9];
    if ( !v13 )
      return 0;
    Privileges = (PPRIVILEGE_SET)Allocate(PagedPool, 0x7FFFuLL, 0x20204D43u, a4);
    if ( Privileges )
    {
      v14 = (unsigned int)a3[10];
      v15 = a5 >> 31;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        v16 = sub_1406BF400(BugCheckParameter3, v14, &v24);
      else
        v16 = sub_1407C9820(BugCheckParameter3, v14, (unsigned int *)&v24);
      v17 = v16;
      v18 = (unsigned int *)v16;
      while ( 1 )
      {
        v19 = *v18;
        v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? sub_1406BF400(BugCheckParameter3, v19, &v23)
            : sub_1407C9820(BugCheckParameter3, v19, (unsigned int *)&v23);
        sub_14065DBC8(v20, (__int64)&v27, (__int64)Privileges);
        v12 = sub_1407221B0(BugCheckParameter3a, v25, (__int64)&v27, 0, (__int64)&v28, (__int64)&a6);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v23);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v23);
        if ( v12 < 0 )
        {
          if ( v12 != -1073741772 )
            break;
          v12 = sub_14065B108(BugCheckParameter3, *v18, BugCheckParameter3a, v15, (unsigned int *)&v29);
          if ( v12 < 0 )
            break;
          v12 = sub_14079B920(BugCheckParameter3a, v29, v28, v15, v25, 1);
          if ( v12 < 0 )
            break;
        }
        ++v6;
        ++v18;
        if ( v6 >= v13 )
        {
          v12 = 0;
          break;
        }
      }
      if ( v17 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          sub_1406BF450(BugCheckParameter3, &v24);
        else
          sub_1407C97C0(BugCheckParameter3, (unsigned int *)&v24);
      }
      SeFreePrivileges(Privileges);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    v12 = sub_1409207EC(BugCheckParameter3, a5, v8, v22);
    if ( v12 >= 0 )
      return 0;
  }
  return (unsigned int)v12;
}
