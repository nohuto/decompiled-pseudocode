/*
 * XREFs of sub_140735E30 @ 0x140735E30
 * Callers:
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_140692DB8 @ 0x140692DB8 (sub_140692DB8.c)
 *     sub_140693128 @ 0x140693128 (sub_140693128.c)
 */

void __fastcall sub_140735E30(int a1, _DWORD **a2, __int64 *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _QWORD *v7; // rsi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rsi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  _QWORD *v13; // rsi
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _QWORD *v16; // rsi
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  _QWORD *v19; // rsi
  _DWORD *v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // rax
  __int64 v23; // rdx
  _DWORD *v24; // rax
  _QWORD *v25; // rsi
  _DWORD *v26; // rax
  _QWORD *v27; // rsi
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx

  switch ( a1 )
  {
    case 28:
LABEL_11:
      v8 = a2[1];
      v9 = 0LL;
      if ( v8 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            sub_140693128();
            v32 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v33 = *a3;
              while ( v32[4] != v33 )
              {
                if ( v32[4] >= v33 )
                {
                  v32 = (_QWORD *)*v32;
                  if ( v32 != v10 )
                    continue;
                }
                goto LABEL_64;
              }
              v9 = (_DWORD *)v32[7];
            }
LABEL_64:
            ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
      a2[11] = v9;
      break;
    case 29:
LABEL_10:
      a2[5] = 0LL;
      break;
    case 22:
LABEL_6:
      v5 = *a2;
      v6 = 0LL;
      if ( !*a2 )
        goto LABEL_9;
      if ( *v5 != 1803104306 )
        goto LABEL_9;
      v7 = v5 + 18;
      if ( (_QWORD *)*v7 == v7 )
        goto LABEL_9;
      sub_140693128();
      v28 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 == v7 )
      {
LABEL_54:
        ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
        KeLeaveCriticalRegion();
LABEL_9:
        a2[5] = v6;
        return;
      }
      v30 = *a3;
      while ( v28[4] != v30 )
      {
        if ( v28[4] >= v30 )
        {
          v28 = (_QWORD *)*v28;
          if ( v28 != v7 )
            continue;
        }
        goto LABEL_54;
      }
LABEL_53:
      v6 = (_DWORD *)v28[7];
      goto LABEL_54;
    case 7:
      v11 = *a2;
      v12 = 0LL;
      if ( *a2 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            sub_140693128();
            v22 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v31 = *a3;
              while ( v22[4] != v31 )
              {
                if ( v22[4] >= v31 )
                {
                  v22 = (_QWORD *)*v22;
                  if ( v22 != v13 )
                    continue;
                }
                goto LABEL_59;
              }
LABEL_58:
              v12 = (_DWORD *)v22[7];
            }
LABEL_59:
            ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
            KeLeaveCriticalRegion();
          }
        }
      }
LABEL_18:
      a2[6] = v12;
      break;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 1:
        case 6:
          a2[6] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 3:
          v26 = *a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_9;
          if ( *v26 != 1803104306 )
            goto LABEL_9;
          v27 = v26 + 18;
          if ( (_QWORD *)*v27 == v27 )
            goto LABEL_9;
          sub_140693128();
          v28 = (_QWORD *)*v27;
          if ( (_QWORD *)*v27 == v27 )
            goto LABEL_54;
          v29 = *a3;
          while ( v28[4] != v29 )
          {
            if ( v28[4] >= v29 )
            {
              v28 = (_QWORD *)*v28;
              if ( v28 != v27 )
                continue;
            }
            goto LABEL_54;
          }
          goto LABEL_53;
        case 5:
          v20 = *a2;
          v12 = 0LL;
          if ( !*a2 )
            goto LABEL_18;
          if ( *v20 != 1803104306 )
            goto LABEL_18;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_18;
          sub_140693128();
          v22 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_59;
          v23 = *a3;
          while ( v22[4] != v23 )
          {
            if ( v22[4] >= v23 )
            {
              v22 = (_QWORD *)*v22;
              if ( v22 != v21 )
                continue;
            }
            goto LABEL_59;
          }
          goto LABEL_58;
        case 8:
          v14 = *a2;
          v15 = 0LL;
          if ( !*a2 )
            goto LABEL_22;
          if ( *v14 != 1803104306 )
            goto LABEL_22;
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 == v16 )
            goto LABEL_22;
          sub_140693128();
          v34 = (_QWORD *)*v16;
          if ( (_QWORD *)*v16 == v16 )
            goto LABEL_80;
          v35 = *a3;
          while ( v34[4] != v35 )
          {
            if ( v34[4] >= v35 )
            {
              v34 = (_QWORD *)*v34;
              if ( v34 != v16 )
                continue;
            }
            goto LABEL_80;
          }
          v15 = (_DWORD *)v34[7];
LABEL_80:
          ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
          KeLeaveCriticalRegion();
LABEL_22:
          a2[7] = v15;
          return;
        case 9:
          a2[7] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 14:
          v17 = *a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_26;
          if ( *v17 != 1803104306 )
            goto LABEL_26;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_26;
          sub_140693128();
          v36 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_85;
          v37 = *a3;
          while ( v36[4] != v37 )
          {
            if ( v36[4] >= v37 )
            {
              v36 = (_QWORD *)*v36;
              if ( v36 != v19 )
                continue;
            }
            goto LABEL_85;
          }
          v18 = (_DWORD *)v36[7];
LABEL_85:
          ExReleasePushLockEx((ULONG_PTR)&qword_140C497D8, 0LL);
          KeLeaveCriticalRegion();
LABEL_26:
          a2[2] = v18;
          return;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
        case 50:
          goto LABEL_6;
        case 25:
        case 27:
          goto LABEL_10;
        case 26:
          goto LABEL_11;
        case 32:
          a2[9] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 36:
        case 49:
          a2[5] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = (_DWORD *)sub_140692DB8(*a2, a3);
          return;
        case 47:
          v24 = *a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_9;
          if ( *v24 != 1803104306 )
            goto LABEL_9;
          v25 = v24 + 18;
          if ( (_QWORD *)*v25 == v25 )
            goto LABEL_9;
          sub_140693128();
          v28 = (_QWORD *)*v25;
          if ( (_QWORD *)*v25 == v25 )
            goto LABEL_54;
          v38 = *a3;
          break;
        default:
          return;
      }
      while ( v28[4] != v38 )
      {
        if ( v28[4] >= v38 )
        {
          v28 = (_QWORD *)*v28;
          if ( v28 != v25 )
            continue;
        }
        goto LABEL_54;
      }
      goto LABEL_53;
  }
}
