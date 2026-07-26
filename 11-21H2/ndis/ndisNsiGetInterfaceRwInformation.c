/*
 * XREFs of ndisNsiGetInterfaceRwInformation @ 0x1C0101E50
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B3C0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000E330 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C000D5C0 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C000D6C0 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebp
  __int64 v5; // r14
  char v6; // di
  char *v8; // rdx
  unsigned int v9; // ebx
  int v10; // esi
  char v11; // r8
  char *v12; // r14
  bool v13; // cl
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  int v16; // edi
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  char *v20; // rcx
  __int64 v21; // rcx
  unsigned int (__fastcall *v22)(__int64, _QWORD, unsigned int *, char *); // rax
  _QWORD *v23; // rdi
  unsigned __int16 v24; // dx
  __int64 v25; // rcx
  char *v26; // r9
  int v27; // eax
  __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  __int64 v31; // rdi
  char v32; // [rsp+50h] [rbp-298h]
  int v33; // [rsp+54h] [rbp-294h]
  unsigned int v34; // [rsp+58h] [rbp-290h]
  unsigned int v35; // [rsp+5Ch] [rbp-28Ch] BYREF
  char *v36; // [rsp+60h] [rbp-288h]
  __int64 v37; // [rsp+68h] [rbp-280h]
  _QWORD *v38; // [rsp+70h] [rbp-278h]
  __int64 v39; // [rsp+78h] [rbp-270h]
  __int64 v40; // [rsp+80h] [rbp-268h]
  char v41[528]; // [rsp+90h] [rbp-258h] BYREF

  v3 = a2;
  v39 = a3;
  v4 = 0;
  v40 = a2;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    v3 = a1;
  v37 = v3;
  memset(v41, 0, 0x204uLL);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      a1,
      v6,
      v5);
  v9 = *(_DWORD *)(v5 + 52);
  v10 = *(_DWORD *)(v5 + 48);
  if ( *(_QWORD *)(v5 + 40) )
  {
    v11 = 0;
    v32 = 0;
    if ( v10 > 0 )
    {
      v12 = *(char **)(v5 + 40);
      while ( 1 )
      {
        if ( v11 )
        {
LABEL_24:
          v5 = v39;
          v6 = v40;
          goto LABEL_25;
        }
        v13 = 0;
        v8 = 0LL;
        v14 = 0;
        if ( v9 > 0x218 )
        {
          if ( v9 == 570 )
          {
            v15 = 516;
            if ( *(_QWORD *)(a1 + 1424) )
              v8 = *(char **)(a1 + 1424);
            else
              v13 = (unsigned int)v10 >= 0x204;
            v16 = 1088;
          }
          else
          {
            if ( v9 != 1088 )
            {
LABEL_68:
              v11 = 1;
              v32 = 1;
              goto LABEL_23;
            }
            v16 = 1092;
            v32 = 1;
            v15 = 4;
            v8 = (char *)(a1 + 1484);
          }
        }
        else if ( v9 == 536 )
        {
          v15 = 34;
          if ( *(_BYTE *)(a1 + 1393) )
            v8 = (char *)(v37 + 1124);
          else
            v14 = 16843010;
          v16 = 570;
        }
        else if ( v9 )
        {
          if ( v9 == 16 )
          {
            v16 = 20;
            v14 = 66184;
            v15 = 4;
          }
          else
          {
            if ( v9 != 20 )
              goto LABEL_68;
            v15 = 516;
            if ( *(_BYTE *)(a1 + 1393) )
            {
              if ( *(_BYTE *)(a1 + 1394) )
              {
                v23 = *(_QWORD **)(a1 + 1408);
                v38 = v23;
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x16u,
                    0xEu,
                    (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
                    (char)v23,
                    v41);
                memset(v41, 0, 0x204uLL);
                *(_WORD *)v41 = *(_WORD *)(v23[2] + 112LL) + 12 + *(_WORD *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL);
                if ( *(_WORD *)v41 > 0x200u )
                  *(_WORD *)v41 = 512;
                memmove(
                  &v41[2],
                  (const void *)(*(_QWORD *)(v23[4] + 4040LL) + 598LL),
                  *(unsigned __int16 *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL));
                v24 = *(_WORD *)v41;
                v25 = *(unsigned __int16 *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL);
                v26 = &v41[v25 + 2];
                v33 = *(unsigned __int16 *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL);
                v36 = &v41[v25 + 2];
                if ( *(unsigned __int16 *)v41 - (unsigned int)v25 >= 2 )
                {
                  LODWORD(v25) = v25 + 2;
                  *(_WORD *)v26 = 45;
                  v26 += 2;
                  v24 = *(_WORD *)v41;
                  v36 = v26;
                  v33 = v25;
                }
                v27 = v24;
                if ( v24 > (unsigned int)v25 )
                {
                  v28 = v23[2];
                  v29 = v27 - v25;
                  v30 = *(unsigned __int16 *)(v28 + 112);
                  v34 = v30;
                  if ( v29 <= v30 )
                  {
                    v30 = v29;
                    v34 = v29;
                  }
                  v31 = v30;
                  memmove(v26, *(const void **)(v28 + 120), v30);
                  LODWORD(v25) = v34 + v33;
                  v24 = *(_WORD *)v41;
                  v26 = &v36[v31];
                  v23 = v38;
                }
                if ( v24 - (unsigned int)v25 >= 2 )
                {
                  LODWORD(v25) = v25 + 2;
                  *(_WORD *)v26 = 45;
                  v26 += 2;
                  v24 = *(_WORD *)v41;
                }
                if ( v24 - (unsigned int)v25 >= 8 )
                  *(_QWORD *)v26 = *(_QWORD *)(*(_QWORD *)(v23[5] + 8LL)
                                             + 2 * (((unsigned __int64)*(unsigned __int16 *)v23[5] - 8) >> 1));
                if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    4u,
                    0x16u,
                    0xFu,
                    (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
                    (char)v23,
                    v41);
                v8 = v41;
                v13 = 0;
              }
              else
              {
                v8 = (char *)(a1 + 596);
              }
            }
            else
            {
              v14 = 66185;
            }
            v16 = 536;
          }
        }
        else
        {
          v15 = 16;
          v8 = (char *)(a1 + 580);
          v16 = 16;
        }
        if ( v10 < v15 )
          goto LABEL_68;
        if ( v14 )
          break;
        if ( !v8 )
        {
          if ( !v13 )
            goto LABEL_68;
LABEL_35:
          v20 = v12;
          goto LABEL_36;
        }
        memmove(v12, v8, v15);
LABEL_22:
        v11 = v32;
        v17 = v16 - v9;
        v9 = v16;
        v12 += v17;
        v10 -= v17;
LABEL_23:
        if ( v10 <= 0 )
          goto LABEL_24;
      }
      v21 = *(_QWORD *)(v37 + 1320);
      v22 = *(unsigned int (__fastcall **)(__int64, _QWORD, unsigned int *, char *))(*(_QWORD *)(v37 + 1328) + 56LL);
      v35 = v15;
      if ( v22(v21, v14, &v35, v12) )
        goto LABEL_35;
      if ( v35 >= v15 )
        goto LABEL_22;
      v15 -= v35;
      v20 = &v12[v35];
LABEL_36:
      memset(v20, 0, v15);
      goto LABEL_22;
    }
LABEL_25:
    v18 = v9 - *(_DWORD *)(v5 + 52);
    *(_DWORD *)(v5 + 48) = v18;
    if ( !v18 )
      v4 = -1073741811;
  }
  else
  {
    *(_DWORD *)(v5 + 48) = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_56ea039682543cc41749bafffb9946f1_Traceguids,
      a1,
      v6,
      v5,
      v4);
  return v4;
}
