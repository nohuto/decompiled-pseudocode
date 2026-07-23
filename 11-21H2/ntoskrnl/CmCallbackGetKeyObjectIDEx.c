/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x140720E20
 * Callers:
 *     <none>
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140721B68 @ 0x140721B68 (sub_140721B68.c)
 *     sub_140721BAC @ 0x140721BAC (sub_140721BAC.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v16; // [rsp+20h] [rbp-31h] BYREF
  __int128 v17; // [rsp+28h] [rbp-29h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-19h]
  __int128 v19; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v20[3]; // [rsp+58h] [rbp+7h] BYREF

  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  sub_140347770((__int64)&v19);
  v16 = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  *(_OWORD *)Privileges = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
    goto LABEL_20;
  v9 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    *v7 = v9;
  if ( !a4 )
  {
    v12 = 0;
    goto LABEL_15;
  }
  if ( (v9 & 1) == 0 )
  {
    sub_140AB4550(v20);
    sub_140AB4370();
    v12 = sub_1407C05F4(&v17, v9);
    if ( v12 >= 0 )
    {
      sub_140721B68(&v17);
      if ( *(_QWORD *)(v9 + 80) && (int)sub_1407C0690(v9, &v16) >= 0 )
      {
        v12 = 0;
        *a4 = v16;
      }
      else
      {
        v12 = -1073741670;
      }
      sub_140721BAC(&v17);
    }
    sub_140AB4260(v11, v10, v13, v14);
    sub_140AB4580(v20);
  }
  else
  {
LABEL_20:
    v12 = -1073741811;
  }
LABEL_15:
  if ( Privileges[1] )
    SeFreePrivileges(Privileges[1]);
  sub_14022EA30((__int64 *)&v19);
  return (unsigned int)v12;
}
