/*
 * XREFs of sub_14090F3F0 @ 0x14090F3F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_14022EA30 @ 0x14022EA30 (sub_14022EA30.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140347770 @ 0x140347770 (sub_140347770.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_14067DE4C @ 0x14067DE4C (sub_14067DE4C.c)
 *     sub_14067FF60 @ 0x14067FF60 (sub_14067FF60.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 *     sub_1409136B4 @ 0x1409136B4 (sub_1409136B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AB4138 @ 0x140AB4138 (sub_140AB4138.c)
 *     sub_140AB4178 @ 0x140AB4178 (sub_140AB4178.c)
 *     sub_140AB4630 @ 0x140AB4630 (sub_140AB4630.c)
 */

__int64 __fastcall sub_14090F3F0(_OWORD *a1, int a2, _OWORD *a3)
{
  char v6; // si
  KPROCESSOR_MODE v7; // di
  char v8; // r13
  int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // r8d
  int v12; // r9d
  int v13; // eax
  _QWORD *v14; // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *v17; // rdx
  ULONG v19; // [rsp+20h] [rbp-E0h]
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v24[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h] BYREF
  __int128 v26; // [rsp+90h] [rbp-70h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-40h] BYREF
  PVOID *p_Object; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  Object = 0LL;
  v25 = 0LL;
  v6 = 0;
  v7 = *((_BYTE *)KeGetCurrentThread() + 562);
  v22[1] = v22;
  v22[0] = v22;
  *(_OWORD *)v24 = 0LL;
  *(_OWORD *)P = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  sub_140347770((__int64)&v25);
  v8 = sub_140AB4138();
  if ( v8 )
  {
    v9 = sub_14067DE4C();
    if ( v9 >= 0 )
    {
      if ( SeSinglePrivilegeCheck(stru_140D3CA70, v7) )
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        v6 = 1;
        v9 = sub_14067DB18(a1, v7, (UNICODE_STRING *)v24);
        if ( v9 >= 0 )
        {
          v9 = sub_14067DB18(a3, v7, (UNICODE_STRING *)P);
          if ( v9 >= 0 )
          {
            LOBYTE(v12) = v7;
            v13 = sub_140AB4630(a2, 0, v11, v12, (__int64)&Object, 0LL);
            v14 = Object;
            v9 = v13;
            if ( v13 >= 0 )
            {
              if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
              {
                if ( !dword_140C54CA8
                  || sub_1402ACD00()
                  || (*(_QWORD *)&v26 = v14,
                      *((_QWORD *)&v26 + 1) = P,
                      *(_QWORD *)&v27 = v24,
                      v15 = sub_140735760(0x2Du, (__int64)&v26, 0LL, 1, 0x2Eu, 0LL, (__int64)v22),
                      v9 = v15,
                      v15 >= 0) )
                {
                  v16 = sub_1409136B4(*(_QWORD *)(v14[1] + 32LL));
                  v9 = sub_14067FF60(46, (__int64)v14, v16, (__int64)&v26, 0LL, v22);
                  if ( v9 == -1073740541 )
                    v9 = 0;
                }
                else if ( v15 == -1073740541 )
                {
                  v9 = 0;
                }
              }
              else
              {
                v9 = -1073741790;
              }
            }
            if ( v14 )
              ObfDereferenceObject(v14);
          }
        }
      }
      else
      {
        v9 = -1073741727;
      }
    }
  }
  else
  {
    v9 = -1073741431;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v24[1] )
    ExFreePoolWithTag(v24[1], 0);
  if ( v6 )
    sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v8 )
    sub_140AB4178();
  sub_14022EA30((__int64 *)&v25);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
    {
      v31 = 8LL;
      p_Object = (PVOID *)&v21;
      v17 = (unsigned __int8 *)word_140028CEA;
      v19 = 3;
      goto LABEL_35;
    }
  }
  else if ( (unsigned int)dword_140C03868 > 5 && sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL) )
  {
    LODWORD(Object) = v9;
    p_Object = &Object;
    v17 = (unsigned __int8 *)byte_140028D20;
    v33 = 8LL;
    v32 = &v21;
    v31 = 4LL;
    v19 = 4;
LABEL_35:
    v21 = 0x1000000LL;
    sub_14020A9C4((__int64)&dword_140C03868, v17, 0LL, 0LL, v19, &v29);
  }
  return (unsigned int)v9;
}
