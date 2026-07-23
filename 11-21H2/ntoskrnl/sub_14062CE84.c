/*
 * XREFs of sub_14062CE84 @ 0x14062CE84
 * Callers:
 *     sub_14022A6DC @ 0x14022A6DC (sub_14022A6DC.c)
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1404617FE @ 0x1404617FE (sub_1404617FE.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_14062CE84(
        _QWORD *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        char a9)
{
  const char *v11; // r15
  unsigned __int16 v12; // r14
  _BYTE *Pool2; // rdi
  void **v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  char *v18; // r8
  unsigned __int64 v19; // rax
  void *v20; // rsp
  ULONG UserDataCount; // r10d
  _BYTE *v22; // rdx
  char *v23; // r8
  const EVENT_DESCRIPTOR *v24; // rdx
  _BYTE v25[4]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int16 v26; // [rsp+44h] [rbp+4h] BYREF
  __int16 v27; // [rsp+48h] [rbp+8h] BYREF
  _BYTE *v28; // [rsp+50h] [rbp+10h]
  int v29; // [rsp+58h] [rbp+18h]
  int v30; // [rsp+60h] [rbp+20h]
  void **v31; // [rsp+68h] [rbp+28h]
  _QWORD *v32; // [rsp+78h] [rbp+38h]
  void *Src[2]; // [rsp+80h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+50h] BYREF
  char *v35; // [rsp+A0h] [rbp+60h]
  __int64 v36; // [rsp+A8h] [rbp+68h]
  const char *v37; // [rsp+B0h] [rbp+70h]
  __int64 v38; // [rsp+B8h] [rbp+78h]
  _QWORD v39[2]; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v40[16]; // [rsp+D0h] [rbp+90h] BYREF
  char v41; // [rsp+E0h] [rbp+A0h] BYREF

  v32 = a1;
  v30 = a4;
  v27 = 0;
  v11 = 0LL;
  v12 = 0;
  v26 = 0;
  Pool2 = 0LL;
  v28 = 0LL;
  *(_OWORD *)Src = 0LL;
  v14 = 0LL;
  v25[0] = 0;
  v15 = *a1 - 0x4648BDB6B675EC37LL;
  if ( *a1 == 0x4648BDB6B675EC37LL )
    v15 = a1[1] + 0x5DC3B238020C6D44LL;
  if ( v15 )
  {
    v16 = 0;
    v29 = 0;
    while ( v16 < a6 )
    {
      if ( *(_BYTE *)(a7 + 16LL * v16 + 12) == 1 )
      {
        v14 = (void **)(a7 + 16LL * v16);
        if ( a8 )
        {
          *(_OWORD *)Src = *(_OWORD *)v14;
          v14 = Src;
          v31 = Src;
          v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
          if ( v17 >= 0xFFFF )
            break;
          if ( a9 )
          {
            if ( v17 )
            {
              v18 = (char *)Src[0] + v17;
              if ( (unsigned __int64)v18 > 0x7FFFFFFF0000LL || v18 < Src[0] )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                v17 = (unsigned int)Src[1];
              }
            }
          }
          if ( v17 <= 0x100 )
          {
            v19 = LODWORD(Src[1]) + 15LL;
            if ( v19 < LODWORD(Src[1]) )
              v19 = 0xFFFFFFFFFFFFFF0LL;
            v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
            Pool2 = v25;
            v28 = v25;
          }
          else
          {
            Pool2 = (_BYTE *)ExAllocatePool2(66LL, LODWORD(Src[1]), 1953985605LL);
            v28 = Pool2;
            if ( !Pool2 )
              break;
            v25[0] = 1;
            v17 = (unsigned int)Src[1];
          }
          memmove(Pool2, Src[0], v17);
        }
        else
        {
          v31 = (void **)(a7 + 16LL * v16);
          Pool2 = *v14;
          v28 = *v14;
        }
        break;
      }
      v29 = ++v16;
    }
    if ( v14 && Pool2 )
    {
      v11 = sub_1404617FE((__int64)Pool2, *((_DWORD *)v14 + 2), &v26);
      v12 = v26;
    }
    UserData.Ptr = (ULONGLONG)a1;
    *(_QWORD *)&UserData.Size = 16LL;
    v35 = &a5;
    v36 = 4LL;
    if ( v11 && v12 )
    {
      v37 = v11;
      v38 = v12;
      v39[0] = &qword_14000EF90;
      v39[1] = 1LL;
      UserDataCount = 6;
      v22 = v40;
      v23 = &v41;
    }
    else
    {
      v27 = *a2;
      v37 = (const char *)&v27;
      v38 = 2LL;
      UserDataCount = 5;
      v22 = v39;
      v23 = v40;
    }
    *(_QWORD *)v22 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v22 + 2) = *a3;
    *((_DWORD *)v22 + 3) = 0;
    *(_QWORD *)v23 = &qword_14000EF90;
    *((_QWORD *)v23 + 1) = 2LL;
    v24 = &stru_14000E990;
    if ( v12 )
      v24 = &stru_140014A78;
    EtwWriteEx(qword_140C15FA8, v24, 0LL, v30 | 1, 0LL, 0LL, UserDataCount, &UserData);
    if ( v25[0] )
      ExFreePoolWithTag(Pool2, 0);
  }
}
