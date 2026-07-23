/*
 * XREFs of qsort @ 0x1403E1E70
 * Callers:
 *     sub_140222A20 @ 0x140222A20 (sub_140222A20.c)
 *     sub_140261A20 @ 0x140261A20 (sub_140261A20.c)
 *     sub_1402C1F50 @ 0x1402C1F50 (sub_1402C1F50.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     sub_140330730 @ 0x140330730 (sub_140330730.c)
 *     sub_140332A80 @ 0x140332A80 (sub_140332A80.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 *     sub_14037E554 @ 0x14037E554 (sub_14037E554.c)
 *     sub_1403C1EDC @ 0x1403C1EDC (sub_1403C1EDC.c)
 *     sub_1403C2F70 @ 0x1403C2F70 (sub_1403C2F70.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     sub_1403ECE00 @ 0x1403ECE00 (sub_1403ECE00.c)
 *     sub_1403FDE00 @ 0x1403FDE00 (sub_1403FDE00.c)
 *     sub_14051E390 @ 0x14051E390 (sub_14051E390.c)
 *     sub_14054E548 @ 0x14054E548 (sub_14054E548.c)
 *     sub_14055D5EC @ 0x14055D5EC (sub_14055D5EC.c)
 *     sub_14058A0E0 @ 0x14058A0E0 (sub_14058A0E0.c)
 *     sub_1405D7BF0 @ 0x1405D7BF0 (sub_1405D7BF0.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7300 (RtlCompareExchangePropertyStore.c)
 *     sub_1405F9C9C @ 0x1405F9C9C (sub_1405F9C9C.c)
 *     sub_1406478F8 @ 0x1406478F8 (sub_1406478F8.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_140768200 @ 0x140768200 (sub_140768200.c)
 *     sub_14082DE40 @ 0x14082DE40 (sub_14082DE40.c)
 *     DxgkInitialize @ 0x140836CC8 (DxgkInitialize.c)
 *     sub_14083D398 @ 0x14083D398 (sub_14083D398.c)
 *     sub_140858F98 @ 0x140858F98 (sub_140858F98.c)
 *     sub_140883164 @ 0x140883164 (sub_140883164.c)
 *     sub_140921BE8 @ 0x140921BE8 (sub_140921BE8.c)
 *     sub_1409BF744 @ 0x1409BF744 (sub_1409BF744.c)
 *     sub_1409BF948 @ 0x1409BF948 (sub_1409BF948.c)
 *     sub_1409EDE68 @ 0x1409EDE68 (sub_1409EDE68.c)
 *     sub_1409FA6E0 @ 0x1409FA6E0 (sub_1409FA6E0.c)
 *     sub_140A1C5E8 @ 0x140A1C5E8 (sub_140A1C5E8.c)
 *     sub_140AF502C @ 0x140AF502C (sub_140AF502C.c)
 *     sub_140AFA274 @ 0x140AFA274 (sub_140AFA274.c)
 *     sub_140AFA5EC @ 0x140AFA5EC (sub_140AFA5EC.c)
 *     sub_140B01F80 @ 0x140B01F80 (sub_140B01F80.c)
 *     sub_140B0728C @ 0x140B0728C (sub_140B0728C.c)
 *     sub_140B151EC @ 0x140B151EC (sub_140B151EC.c)
 *     sub_140B31500 @ 0x140B31500 (sub_140B31500.c)
 *     sub_140B4C634 @ 0x140B4C634 (sub_140B4C634.c)
 *     sub_140B51320 @ 0x140B51320 (sub_140B51320.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A590 @ 0x14042A590 (sub_14042A590.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  _BYTE *v11; // rbx
  char *i; // rdi
  size_t v13; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rbx
  char v16; // cl
  size_t v17; // rbx
  char *v18; // rdi
  _BYTE *v19; // r8
  size_t v20; // r9
  char v21; // cl
  size_t v22; // r8
  _BYTE *v23; // rdx
  char *v24; // r9
  char v25; // cl
  size_t v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  char *v30; // rbx
  char *v31; // rsi
  unsigned __int64 v32; // rbp
  char *v33; // rdx
  signed __int64 v34; // r9
  char v35; // cl
  char *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-448h]
  _QWORD v38[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v39[62]; // [rsp+230h] [rbp-248h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      sub_14042A590(PtFuncCompare);
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; i += SizeOfElements )
                {
                  if ( (int)sub_14042A5E0(i, v11) > 0 )
                    v11 = i;
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v37;
            }
            goto LABEL_18;
          }
          v17 = SizeOfElements * (v10 >> 1);
          v18 = (char *)Base + v17;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v17) > 0 )
          {
            v20 = SizeOfElements;
            v19 = (char *)Base + v17;
            if ( Base != v18 )
            {
              do
              {
                v21 = v19[-v17];
                v19[-v17] = *v19;
                *v19++ = v21;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v8, v19, v20) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v8;
            if ( Base != v8 )
            {
              v24 = (char *)((_BYTE *)Base - v8);
              do
              {
                v25 = v23[(_QWORD)v24];
                v23[(_QWORD)v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v17, v8, v22) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v8;
            if ( v18 != v8 )
            {
              v28 = v18 - v8;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (char *)Base;
          v31 = v8;
          while ( 1 )
          {
            if ( v18 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= v18 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v30 += SizeOfElements;
            while ( v30 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) <= 0 );
            do
            {
LABEL_38:
              v32 = (unsigned __int64)v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v18 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v18) > 0 );
            if ( v31 < v30 )
              break;
            v26 = SizeOfElements;
            v33 = v31;
            if ( v31 != v30 )
            {
              v34 = v30 - v31;
              do
              {
                v35 = v33[v34];
                v33[v34] = *v33;
                *v33++ = v35;
                --v26;
              }
              while ( v26 );
            }
            v36 = v30;
            if ( v18 != v31 )
              v36 = v18;
            v18 = v36;
          }
          if ( (unsigned __int64)v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= (unsigned __int64)v18 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) )
                goto LABEL_53;
            }
          }
          do
            v32 -= SizeOfElements;
          while ( v32 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) );
LABEL_53:
          v9 = v37;
          if ( (__int64)(v32 - (_QWORD)Base) >= v8 - v30 )
            break;
          if ( v30 < v8 )
          {
            v38[v37] = v30;
            v39[v37] = v8;
            v9 = ++v37;
          }
          if ( (unsigned __int64)Base >= v32 )
          {
LABEL_18:
            v37 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v38[v9];
            v8 = (char *)v39[v9];
          }
          else
          {
            v8 = (char *)v32;
          }
        }
        if ( (unsigned __int64)Base < v32 )
        {
          v38[v37] = Base;
          v39[v37] = v32;
          v9 = ++v37;
        }
        if ( v30 >= v8 )
          goto LABEL_18;
        Base = v30;
      }
    }
  }
  else
  {
    _misaligned_access();
  }
}
