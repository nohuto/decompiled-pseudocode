/*
 * XREFs of sub_1407C0690 @ 0x1407C0690
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14065C91C @ 0x14065C91C (sub_14065C91C.c)
 *     sub_140677DC0 @ 0x140677DC0 (sub_140677DC0.c)
 *     sub_140678454 @ 0x140678454 (sub_140678454.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406815C0 @ 0x1406815C0 (sub_1406815C0.c)
 *     sub_14071784C @ 0x14071784C (sub_14071784C.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C05CC @ 0x1407C05CC (sub_1407C05CC.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_1409103FC @ 0x1409103FC (sub_1409103FC.c)
 *     sub_140910724 @ 0x140910724 (sub_140910724.c)
 *     sub_1409147B4 @ 0x1409147B4 (sub_1409147B4.c)
 *     sub_140914E64 @ 0x140914E64 (sub_140914E64.c)
 *     sub_140916454 @ 0x140916454 (sub_140916454.c)
 *     sub_1409188E8 @ 0x1409188E8 (sub_1409188E8.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1406B98FC @ 0x1406B98FC (sub_1406B98FC.c)
 *     sub_1406E137C @ 0x1406E137C (sub_1406E137C.c)
 *     sub_1407C07F4 @ 0x1407C07F4 (sub_1407C07F4.c)
 *     sub_1407C8830 @ 0x1407C8830 (sub_1407C8830.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_1407C0690(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  __int16 v9; // dx
  __int64 i; // r10
  __int64 v11; // r10
  __int16 v12; // dx
  _PRIVILEGE_SET *v13; // rdi
  unsigned __int16 j; // cx
  PPRIVILEGE_SET v15; // rax
  int v16; // eax
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v20 = 0LL;
  v18 = 0LL;
  WORD1(v18) = -1;
  *(_OWORD *)Privileges = 0LL;
  v5 = sub_140AB46D0(a1, a2, a3);
  v8 = sub_1407C07F4(&v18, *(unsigned __int16 *)(a1 + 66));
  if ( v8 < 0 )
  {
    v13 = Privileges[1];
  }
  else
  {
    v9 = *(_WORD *)(a1 + 66);
    WORD1(v18) = v9;
    if ( v9 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; v9 = v12 - 1 )
      {
        sub_1406B98FC((__int64)&v18, v9, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v11 + 24);
      }
    }
    else
    {
      *((_QWORD *)&v18 + 1) = a1;
    }
    v13 = Privileges[1];
    if ( v5 )
    {
      for ( j = WORD1(v18); (j & 0x8000u) == 0; --j )
      {
        v15 = j < 2u ? Privileges[j - 1] : (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + j - 2);
        if ( HIWORD(v15[3].Control) && BYTE1(v15[3].Control) == 1 )
          break;
        if ( v15[2].PrivilegeCount != -1 )
        {
          if ( *(_DWORD *)(a1 + 40) != -1 || (*(_DWORD *)(a1 + 184) & 0x40000) == 0 )
          {
            v16 = sub_1407C8830(&v18, &v20);
            v13 = Privileges[1];
            goto LABEL_16;
          }
          break;
        }
      }
    }
    v16 = sub_1406E137C(a1, &v20);
LABEL_16:
    v8 = v16;
    if ( v16 >= 0 )
    {
      v8 = 0;
      *a2 = v20;
    }
  }
  if ( v13 )
    SeFreePrivileges(v13);
  if ( v5 )
    sub_140AB42A0(v7, v6);
  return (unsigned int)v8;
}
