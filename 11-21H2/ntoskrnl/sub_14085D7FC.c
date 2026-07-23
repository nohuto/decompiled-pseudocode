/*
 * XREFs of sub_14085D7FC @ 0x14085D7FC
 * Callers:
 *     sub_1403DA7FC @ 0x1403DA7FC (sub_1403DA7FC.c)
 * Callees:
 *     sub_1402E1280 @ 0x1402E1280 (sub_1402E1280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryKey @ 0x14041BA20 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F5CE4 @ 0x1405F5CE4 (sub_1405F5CE4.c)
 *     sub_1406959BC @ 0x1406959BC (sub_1406959BC.c)
 *     SeValidSecurityDescriptor @ 0x1406ACC40 (SeValidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085D7FC(HANDLE KeyHandle, int a2, _DWORD *a3, char **a4)
{
  ULONG v5; // r15d
  unsigned int *v7; // r14
  ULONG *Pool2; // rdi
  NTSTATUS v9; // eax
  int v10; // ebx
  __int64 v11; // r12
  char *v12; // rax
  char v13; // r15
  char *v15; // rsi
  ULONG v16; // r13d
  unsigned int v17; // esi
  unsigned int v18; // eax
  size_t v19; // r15
  char *v20; // rax
  NTSTATUS v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // esi
  ULONG v24; // esi
  unsigned int v25; // esi
  char *v26; // rsi
  unsigned int v27; // ecx
  char *v28; // r15
  char *v29; // rsi
  __int16 v30; // ax
  char *v31; // rsi
  __int64 v32; // rcx
  char *v33; // rsi
  char *v34; // rsi
  void *v35; // rdx
  __int64 v36; // rcx
  char *v37; // rsi
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  char v39; // [rsp+30h] [rbp-D0h]
  ULONG Length; // [rsp+34h] [rbp-CCh] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  char *v42; // [rsp+40h] [rbp-C0h]
  unsigned int v43; // [rsp+48h] [rbp-B8h]
  char *v44; // [rsp+50h] [rbp-B0h]
  ULONG v45; // [rsp+58h] [rbp-A8h]
  char **v46; // [rsp+60h] [rbp-A0h]
  _DWORD *v47; // [rsp+68h] [rbp-98h]
  char *v48; // [rsp+70h] [rbp-90h]
  WCHAR SourceString[344]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyInformation[560]; // [rsp+330h] [rbp+230h] BYREF

  v46 = a4;
  v47 = a3;
  Length = 0;
  v5 = 560;
  v39 = 0;
  KeyHandlea = 0LL;
  v42 = 0LL;
  v7 = (unsigned int *)KeyInformation;
  Pool2 = 0LL;
  v9 = ZwQueryKey(KeyHandle, KeyFullInformation, KeyInformation, 0x230u, &Length);
  v10 = v9;
  if ( v9 >= 0 )
  {
LABEL_2:
    v11 = v7[5];
    if ( (_DWORD)v11 )
    {
      v16 = a2 + 18;
      v17 = 56 * v11;
      Pool2 = (ULONG *)ExAllocatePool2(256LL, v16, 1884513619LL);
      if ( Pool2 )
      {
        v18 = 0;
        v43 = 0;
        while ( 1 )
        {
          LODWORD(ResultLength) = v18;
          v10 = sub_1402E1280(
                  SourceString,
                  0x157uLL,
                  L"%s\\%d",
                  L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                  ResultLength);
          if ( v10 < 0 )
            break;
          v10 = sub_1406959BC(SourceString, 0x201u, &KeyHandlea);
          if ( v10 < 0 )
            break;
          v21 = ZwQueryKey(KeyHandlea, KeyFullInformation, v7, v5, &Length);
          v10 = v21;
          if ( v21 < 0 )
          {
            if ( v21 != -2147483643 && v21 != -1073741789 )
              goto LABEL_10;
            v13 = v39;
            if ( v39 )
              ExFreePoolWithTag(v7, 0x70536553u);
            v7 = (unsigned int *)ExAllocatePool2(256LL, Length, 1884513619LL);
            if ( !v7 )
            {
              v10 = -1073741670;
              goto LABEL_41;
            }
            v5 = Length;
            v39 = 1;
            v10 = ZwQueryKey(KeyHandlea, KeyFullInformation, v7, Length, &Length);
            if ( v10 < 0 )
              goto LABEL_10;
          }
          v22 = v7[10] + 18;
          if ( v22 > v16 )
          {
            Pool2 = (ULONG *)sub_1405F5CE4(Pool2, v22);
            if ( !Pool2 )
              goto LABEL_21;
            v16 = v22;
          }
          v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B2D0, KeyValuePartialInformation, Pool2, v16, &Length);
          if ( v10 < 0 )
            goto LABEL_10;
          v23 = Pool2[2] + ((v17 + 1) & 0xFFFFFFFE);
          v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B668, KeyValuePartialInformation, Pool2, v16, &Length);
          if ( v10 < 0 )
            goto LABEL_10;
          v24 = Pool2[2] + v23;
          v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B658, KeyValuePartialInformation, Pool2, v16, &Length);
          if ( v10 < 0 )
            goto LABEL_10;
          v25 = Pool2[2] + ((v24 + 7) & 0xFFFFFFF8);
          v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B648, KeyValuePartialInformation, Pool2, v16, &Length);
          if ( v10 < 0 )
            goto LABEL_10;
          v17 = Pool2[2] + ((v25 + 7) & 0xFFFFFFF8);
          ZwClose(KeyHandlea);
          KeyHandlea = 0LL;
          v18 = v43 + 1;
          v43 = v18;
          if ( v18 >= (unsigned int)v11 )
          {
            v19 = v17;
            v20 = (char *)ExAllocatePool2(256LL, v17, 1884513619LL);
            v42 = v20;
            v15 = v20;
            v48 = v20;
            if ( !v20 )
            {
              v13 = v39;
              v10 = -1073741670;
              goto LABEL_42;
            }
            memset(v20, 0, v19);
            v44 = &v42[v19];
            v26 = &v42[56 * v11];
            v27 = 0;
            v43 = 0;
            v28 = v42 + 8;
            while ( 1 )
            {
              LODWORD(ResultLength) = v27;
              v10 = sub_1402E1280(
                      SourceString,
                      0x157uLL,
                      L"%s\\%d",
                      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa\\CentralizedAccessPolicies\\CAPEs",
                      ResultLength);
              if ( v10 < 0 )
                goto LABEL_10;
              v10 = sub_1406959BC(SourceString, 0x201u, &KeyHandlea);
              if ( v10 < 0 )
                goto LABEL_10;
              v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B638, KeyValuePartialInformation, Pool2, v16, &Length);
              if ( v10 < 0 )
                goto LABEL_10;
              if ( Pool2[2] != 4 )
              {
                v10 = -1073741811;
                goto LABEL_10;
              }
              *(_DWORD *)&v42[56 * v43 + 48] = Pool2[3];
              v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B2D0, KeyValuePartialInformation, Pool2, v16, &Length);
              if ( v10 < 0 )
                goto LABEL_10;
              v29 = (char *)((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
              if ( &v29[Pool2[2]] > v44 )
                goto LABEL_69;
              v30 = *((_WORD *)Pool2 + 4);
              *((_WORD *)v28 - 3) = v30;
              *((_WORD *)v28 - 4) = v30;
              *(_QWORD *)v28 = v29;
              memmove(v29, Pool2 + 3, Pool2[2]);
              v31 = &v29[Pool2[2]];
              v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B668, KeyValuePartialInformation, Pool2, v16, &Length);
              if ( v10 < 0 )
                goto LABEL_10;
              v32 = Pool2[2];
              if ( &v31[v32] > v44 )
                goto LABEL_69;
              *((_DWORD *)v28 + 2) = v32;
              if ( Pool2[2] )
              {
                *((_QWORD *)v28 + 2) = v31;
                memmove(v31, Pool2 + 3, Pool2[2]);
              }
              else
              {
                *((_QWORD *)v28 + 2) = 0LL;
              }
              v33 = &v31[Pool2[2]];
              v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B658, KeyValuePartialInformation, Pool2, v16, &Length);
              if ( v10 < 0 )
                goto LABEL_10;
              v34 = (char *)((unsigned __int64)(v33 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              if ( &v34[Pool2[2]] > v44 )
                goto LABEL_69;
              *((_QWORD *)v28 + 3) = v34;
              memmove(v34, Pool2 + 3, Pool2[2]);
              v35 = (void *)*((_QWORD *)v28 + 3);
              v45 = Pool2[2];
              if ( !SeValidSecurityDescriptor(v45, v35) )
                goto LABEL_65;
              v10 = ZwQueryValueKey(KeyHandlea, &stru_140D3B648, KeyValuePartialInformation, Pool2, v16, &Length);
              if ( v10 < 0 )
                goto LABEL_10;
              v36 = Pool2[2];
              v37 = (char *)((unsigned __int64)&v34[v45 + 7] & 0xFFFFFFFFFFFFFFF8uLL);
              if ( &v37[v36] > v44 )
              {
LABEL_69:
                v10 = -1073741789;
                goto LABEL_10;
              }
              if ( (_DWORD)v36 )
              {
                *((_QWORD *)v28 + 4) = v37;
                memmove(v37, Pool2 + 3, Pool2[2]);
                if ( !SeValidSecurityDescriptor(Pool2[2], *((PSECURITY_DESCRIPTOR *)v28 + 4)) )
                {
LABEL_65:
                  v10 = -1073741703;
                  goto LABEL_10;
                }
              }
              else
              {
                *((_QWORD *)v28 + 4) = 0LL;
              }
              v26 = &v37[Pool2[2]];
              ZwClose(KeyHandlea);
              v28 += 56;
              KeyHandlea = 0LL;
              v27 = v43 + 1;
              v43 = v27;
              if ( v27 >= (unsigned int)v11 )
              {
                v12 = v48;
                goto LABEL_4;
              }
            }
          }
        }
      }
      else
      {
LABEL_21:
        v10 = -1073741670;
      }
    }
    else
    {
      v12 = 0LL;
LABEL_4:
      *v46 = v12;
      *v47 = v11;
      if ( v10 >= 0 )
      {
        v13 = v39;
        goto LABEL_6;
      }
    }
    goto LABEL_10;
  }
  if ( v9 != -2147483643 && v9 != -1073741789 )
  {
LABEL_10:
    v13 = v39;
LABEL_41:
    v15 = v42;
    goto LABEL_42;
  }
  v7 = (unsigned int *)ExAllocatePool2(256LL, Length, 1884513619LL);
  if ( v7 )
  {
    v5 = Length;
    v39 = 1;
    v10 = ZwQueryKey(KeyHandle, KeyFullInformation, v7, Length, &Length);
    if ( v10 >= 0 )
      goto LABEL_2;
    goto LABEL_10;
  }
  v15 = 0LL;
  v10 = -1073741670;
  v13 = 0;
LABEL_42:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x70536553u);
LABEL_6:
  if ( v13 && v7 )
    ExFreePoolWithTag(v7, 0x70536553u);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x70536553u);
  return (unsigned int)v10;
}
