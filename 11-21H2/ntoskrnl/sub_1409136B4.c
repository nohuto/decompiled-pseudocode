/*
 * XREFs of sub_1409136B4 @ 0x1409136B4
 * Callers:
 *     sub_14090F3F0 @ 0x14090F3F0 (sub_14090F3F0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     Allocate @ 0x14024AC60 (Allocate.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x14041C0C0 (ZwFlushBuffersFile.c)
 *     sub_14065A7E0 @ 0x14065A7E0 (sub_14065A7E0.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14070AAD0 @ 0x14070AAD0 (sub_14070AAD0.c)
 *     sub_14083D1A4 @ 0x14083D1A4 (sub_14083D1A4.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_14091D570 @ 0x14091D570 (sub_14091D570.c)
 *     sub_14091FEFC @ 0x14091FEFC (sub_14091FEFC.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_1409136B4(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, struct _LOOKASIDE_LIST_EX *a4)
{
  char v6; // r14
  char v7; // r12
  _PRIVILEGE_SET *v8; // rax
  _PRIVILEGE_SET *v9; // r15
  int v10; // ebx
  int v11; // eax
  ULONG_PTR v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  char v30; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v31; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v33[3]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+A0h] [rbp-60h] BYREF

  v30 = 0;
  v31 = 0LL;
  IoStatusBlock = 0LL;
  v6 = 0;
  v7 = 0;
  memset(v33, 0, sizeof(v33));
  v8 = (_PRIVILEGE_SET *)Allocate(PagedPool, 0x1B0uLL, 0x33394D43u, a4);
  v9 = v8;
  if ( !v8 )
    return (unsigned int)-1073741670;
  v11 = sub_14070AAD0(a3, 0, (int)&v30, (__int64)&v31, 17367041, 0, 0LL, 0LL, v8);
  v12 = v31;
  v10 = v11;
  if ( v11 >= 0 )
  {
    sub_140AB4550(v33);
    v6 = 1;
    sub_140AB4370(v14, v13, v15);
    sub_140AB41FC(BugCheckParameter3);
    if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
    {
LABEL_5:
      v10 = -1073741611;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
      goto LABEL_7;
    if ( BugCheckParameter3 == qword_140C02770 )
    {
      v10 = sub_14091FEFC(BugCheckParameter3, v12);
      if ( v10 < 0 )
      {
LABEL_18:
        sub_140AB41E0(BugCheckParameter3);
        sub_140AB4260(v24, v23, v25, v26);
        if ( v7 )
          sub_14083D1A4(BugCheckParameter3, v27, v28);
        goto LABEL_20;
      }
    }
    sub_140AB41E0(BugCheckParameter3);
    sub_140AB4260(v17, v16, v18, v19);
    v10 = sub_1406885A4(v12, 0xCu);
    if ( v10 >= 0 )
    {
      sub_140AB4580(v33);
      v6 = 0;
      sub_14083D56C(BugCheckParameter3);
      v7 = 1;
      sub_140AB4370(v21, v20, v22);
      sub_140AB41FC(BugCheckParameter3);
      if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 4) != 0 )
        goto LABEL_5;
      if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) == 0 )
      {
        v10 = sub_14091D570(*(HANDLE *)(BugCheckParameter3 + 1544), ObjectInformation, 0);
        if ( v10 >= 0 )
        {
          *(_DWORD *)(BugCheckParameter3 + 160) |= 4u;
          v10 = sub_14091D570(*(HANDLE *)(v12 + 1544), 0LL, 0);
          if ( v10 < 0 || (v10 = ZwFlushBuffersFile(*(HANDLE *)(v12 + 1544), &IoStatusBlock), v10 < 0) )
          {
            if ( (int)sub_14091D570(*(HANDLE *)(BugCheckParameter3 + 1544), 0LL, 0) < 0 )
              v10 = -1073741492;
          }
        }
        goto LABEL_18;
      }
LABEL_7:
      v10 = -1073741811;
      goto LABEL_18;
    }
  }
LABEL_20:
  if ( v12 )
  {
    if ( !v6 )
    {
      sub_140AB4550(v33);
      v6 = 1;
    }
    if ( v10 >= 0 )
    {
      *(_OWORD *)(v12 + 1544) = 0LL;
      *(_OWORD *)(v12 + 1560) = 0LL;
      *(_OWORD *)(v12 + 1576) = 0LL;
    }
    sub_14065A7E0(v12);
  }
  if ( v6 )
    sub_140AB4580(v33);
  SeFreePrivileges(v9);
  return (unsigned int)v10;
}
