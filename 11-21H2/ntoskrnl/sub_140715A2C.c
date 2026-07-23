/*
 * XREFs of sub_140715A2C @ 0x140715A2C
 * Callers:
 *     sub_140716758 @ 0x140716758 (sub_140716758.c)
 *     sub_14091F9DC @ 0x14091F9DC (sub_14091F9DC.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140715BA0 @ 0x140715BA0 (sub_140715BA0.c)
 *     sub_140718AE8 @ 0x140718AE8 (sub_140718AE8.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C97FC @ 0x1407C97FC (sub_1407C97FC.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_140715A2C(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int a3)
{
  unsigned int v5; // r15d
  _PRIVILEGE_SET *v6; // r14
  __int64 v7; // rax
  struct _LOOKASIDE_LIST_EX *v8; // r9
  __int64 v9; // rdi
  unsigned __int16 v10; // si
  _PRIVILEGE_SET *v11; // rax
  __int64 v12; // rax
  int v13; // esi
  unsigned int i; // edi
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  v5 = BugCheckParameter4;
  v6 = 0LL;
  sub_1407C97FC(&v16);
  sub_1407C97FC(&v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v7 = sub_1406BF400(BugCheckParameter3, a3, &v17);
  else
    v7 = sub_1407C9820(BugCheckParameter3);
  v9 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(v7 + 2) & 0x20) == 0 )
    goto LABEL_7;
  v10 = 2 * *(_WORD *)(v7 + 72);
  v11 = (_PRIVILEGE_SET *)Allocate(PagedPool, v10, 0x20394D43u, v8);
  v6 = v11;
  if ( v11 )
  {
    sub_140718AE8(v11, v10, v9 + 76, *(unsigned __int16 *)(v9 + 72));
LABEL_7:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v12 = sub_1406BF400(BugCheckParameter3, v5, &v16);
    else
      v12 = sub_1407C9820(BugCheckParameter3);
    if ( v12 )
    {
      v13 = 0;
      for ( i = -1073741772; v13 < *(_DWORD *)(BugCheckParameter3 + 216); ++v13 )
      {
        i = sub_140715BA0(BugCheckParameter3, v13);
        if ( i != -1073741772 )
          break;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        sub_1406BF450(BugCheckParameter3, &v16);
      else
        sub_1407C97C0(BugCheckParameter3, &v16);
    }
    else
    {
      i = -1073741670;
    }
    if ( v6 )
      SeFreePrivileges(v6);
    goto LABEL_16;
  }
  i = -1073741670;
LABEL_16:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    sub_1406BF450(BugCheckParameter3, &v17);
  else
    sub_1407C97C0(BugCheckParameter3, &v17);
  return i;
}
