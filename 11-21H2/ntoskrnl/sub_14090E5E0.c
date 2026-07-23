/*
 * XREFs of sub_14090E5E0 @ 0x14090E5E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020AA74 @ 0x14020AA74 (sub_14020AA74.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1409120AC @ 0x1409120AC (sub_1409120AC.c)
 *     sub_140919170 @ 0x140919170 (sub_140919170.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB42A0 @ 0x140AB42A0 (sub_140AB42A0.c)
 *     sub_140AB43C0 @ 0x140AB43C0 (sub_140AB43C0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 *     sub_140AB46D0 @ 0x140AB46D0 (sub_140AB46D0.c)
 */

__int64 __fastcall sub_14090E5E0(int a1)
{
  int v2; // ebx
  KPROCESSOR_MODE v3; // bl
  int v4; // r8d
  int v5; // r9d
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID Object; // [rsp+30h] [rbp-58h] BYREF
  __int128 v21; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v22[3]; // [rsp+48h] [rbp-40h] BYREF

  Object = 0LL;
  v21 = 0LL;
  memset(v22, 0, sizeof(v22));
  sub_140347770((__int64)&v21);
  v2 = sub_14067DE4C();
  if ( v2 >= 0 )
  {
    v3 = *((_BYTE *)KeGetCurrentThread() + 562);
    if ( SeSinglePrivilegeCheck(stru_140D3CA58, v3) )
    {
      LOBYTE(v5) = v3;
      v6 = a1 & 3;
      v7 = sub_140AB4630(a1, 131078, v4, v5, (__int64)&Object, 0LL);
      v11 = Object;
      v2 = v7;
      if ( v7 >= 0 )
      {
        if ( (unsigned __int8)sub_140AB46D0(v9, v8, v10) )
        {
          while ( 1 )
          {
            sub_14071B6EC();
            v2 = sub_140AB43C0(v11, 0LL);
            if ( v2 < 0 )
              break;
            v14 = v11[1];
            v16 = *(_QWORD **)(v14 + 32);
            v12 = *(unsigned int *)(v16[8] + 36LL);
            if ( *(_DWORD *)(v14 + 40) != (_DWORD)v12 )
            {
              v2 = -1073741811;
              break;
            }
            if ( !sub_14020AA74(v16 + 526) && !sub_14020AA74(v16 + 524) )
            {
              sub_140AB4550(v22);
              v2 = sub_1409120AC(*(_QWORD *)(v11[1] + 32LL), v6);
              sub_140AB4580(v22);
              break;
            }
            sub_140AB41FC(v16);
            sub_140919170(v16);
          }
          sub_140AB4260(v13, v12, v14, v15);
          sub_140AB42A0(v18, v17);
        }
        else
        {
          v2 = -1073741431;
        }
      }
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  sub_14022EA30((__int64 *)&v21);
  return (unsigned int)v2;
}
