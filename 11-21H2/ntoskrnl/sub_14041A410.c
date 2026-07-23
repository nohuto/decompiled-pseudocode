/*
 * XREFs of sub_14041A410 @ 0x14041A410
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_14041A870 @ 0x14041A870 (sub_14041A870.c)
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

void __fastcall sub_14041A410(
        _QWORD *a1,
        __int16 *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        char a7,
        char a8)
{
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int16 v12; // r14
  _BYTE *Pool2; // rdi
  void **v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  char *v17; // r8
  unsigned __int64 v18; // rax
  void *v19; // rsp
  ULONG UserDataCount; // r9d
  _BYTE *v21; // rdx
  char *v22; // r8
  const EVENT_DESCRIPTOR *v23; // rdx
  _BYTE v24[4]; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int16 v25; // [rsp+44h] [rbp+4h] BYREF
  __int16 v26; // [rsp+48h] [rbp+8h] BYREF
  _BYTE *v27; // [rsp+50h] [rbp+10h]
  int v28; // [rsp+58h] [rbp+18h]
  void **v29; // [rsp+60h] [rbp+20h]
  _QWORD *v30; // [rsp+70h] [rbp+30h]
  void *Src[2]; // [rsp+78h] [rbp+38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp+50h] BYREF
  int *v33; // [rsp+A0h] [rbp+60h]
  __int64 v34; // [rsp+A8h] [rbp+68h]
  __int16 *v35; // [rsp+B0h] [rbp+70h]
  __int64 v36; // [rsp+B8h] [rbp+78h]
  _QWORD v37[2]; // [rsp+C0h] [rbp+80h] BYREF
  _BYTE v38[16]; // [rsp+D0h] [rbp+90h] BYREF
  char v39; // [rsp+E0h] [rbp+A0h] BYREF
  int v41; // [rsp+158h] [rbp+118h] BYREF

  v41 = a4;
  v30 = a1;
  v10 = a6;
  v26 = 0;
  v11 = 0LL;
  v12 = 0;
  v25 = 0;
  Pool2 = 0LL;
  v27 = 0LL;
  *(_OWORD *)Src = 0LL;
  v14 = 0LL;
  v24[0] = 0;
  if ( *a1 != 0x4648BDB6B675EC37LL || a1[1] != 0xA23C4DC7FDF392BCuLL )
  {
    v15 = 0;
    v28 = 0;
    while ( v15 < a5 )
    {
      if ( *(_BYTE *)(a6 + 16LL * v15 + 12) == 1 )
      {
        v14 = (void **)(a6 + 16LL * v15);
        if ( a7 )
        {
          *(_OWORD *)Src = *(_OWORD *)v14;
          v14 = Src;
          v29 = Src;
          v16 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
          if ( v16 >= 0xFFFF )
            break;
          if ( a8 )
          {
            if ( v16 )
            {
              v17 = (char *)Src[0] + v16;
              if ( (unsigned __int64)v17 > 0x7FFFFFFF0000LL || v17 < Src[0] )
              {
                MEMORY[0x7FFFFFFF0000] = 0;
                v16 = (unsigned int)Src[1];
              }
            }
          }
          if ( v16 <= 0x100 )
          {
            v18 = LODWORD(Src[1]) + 15LL;
            if ( v18 < LODWORD(Src[1]) )
              v18 = 0xFFFFFFFFFFFFFF0LL;
            v19 = alloca(v18 & 0xFFFFFFFFFFFFFFF0uLL);
            Pool2 = v24;
            v27 = v24;
          }
          else
          {
            Pool2 = (_BYTE *)ExAllocatePool2(66LL, LODWORD(Src[1]), 1953985605LL);
            v27 = Pool2;
            if ( !Pool2 )
              break;
            v24[0] = 1;
            v16 = (unsigned int)Src[1];
          }
          memmove(Pool2, Src[0], v16);
        }
        else
        {
          v29 = (void **)(a6 + 16LL * v15);
          Pool2 = *v14;
          v27 = *v14;
        }
        break;
      }
      v28 = ++v15;
    }
    if ( v14 && Pool2 )
    {
      v11 = sub_1404617FE(Pool2, *((unsigned int *)v14 + 2), &v25, v10);
      v12 = v25;
    }
    UserData.Ptr = (ULONGLONG)a1;
    *(_QWORD *)&UserData.Size = 16LL;
    v33 = &v41;
    v34 = 4LL;
    if ( v11 && v12 )
    {
      v35 = (__int16 *)v11;
      v36 = v12;
      v37[0] = &qword_14000EF90;
      v37[1] = 1LL;
      UserDataCount = 6;
      v21 = v38;
      v22 = &v39;
    }
    else
    {
      v26 = *a2;
      v35 = &v26;
      v36 = 2LL;
      UserDataCount = 5;
      v21 = v37;
      v22 = v38;
    }
    *(_QWORD *)v21 = *((_QWORD *)a3 + 1);
    *((_DWORD *)v21 + 2) = *a3;
    *((_DWORD *)v21 + 3) = 0;
    *(_QWORD *)v22 = &qword_14000EF90;
    *((_QWORD *)v22 + 1) = 2LL;
    v23 = &stru_14000E990;
    if ( v12 )
      v23 = &stru_140014A78;
    EtwWriteEx(qword_140C15FA8, v23, 0LL, 1u, 0LL, 0LL, UserDataCount, &UserData);
    if ( v24[0] )
      ExFreePoolWithTag(Pool2, 0);
  }
}
