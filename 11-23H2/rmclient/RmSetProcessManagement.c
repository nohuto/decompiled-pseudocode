/*
 * XREFs of RmSetProcessManagement @ 0x18001C4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800010E0 @ 0x1800010E0 (sub_1800010E0.c)
 *     sub_1800011A0 @ 0x1800011A0 (sub_1800011A0.c)
 *     sub_180001288 @ 0x180001288 (sub_180001288.c)
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_180012370 @ 0x180012370 (sub_180012370.c)
 *     sub_180012BB4 @ 0x180012BB4 (sub_180012BB4.c)
 *     sub_180013444 @ 0x180013444 (sub_180013444.c)
 *     sub_180013778 @ 0x180013778 (sub_180013778.c)
 *     sub_180013F04 @ 0x180013F04 (sub_180013F04.c)
 *     sub_180014410 @ 0x180014410 (sub_180014410.c)
 *     sub_180014580 @ 0x180014580 (sub_180014580.c)
 */

__int64 __fastcall RmSetProcessManagement(__int64 a1, void *a2, __int64 a3, int a4, __m128i *a5)
{
  __int64 v8; // rdi
  char v9; // r15
  int v10; // eax
  __int64 v11; // r12
  unsigned int LastError; // ebx
  DWORD ProcessId; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char v20; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v21[3]; // [rsp+51h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Dh] BYREF
  DWORD v23; // [rsp+58h] [rbp-19h] BYREF
  __int64 v24; // [rsp+60h] [rbp-11h] BYREF
  __int64 v25; // [rsp+68h] [rbp-9h] BYREF
  __m128i v26; // [rsp+70h] [rbp-1h] BYREF

  v25 = a3;
  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 2LL) )
    sub_1800011A0((__int64)&dword_180032000, byte_18002A724);
  v8 = 0LL;
  v23 = 0;
  v24 = 0LL;
  v9 = 6;
  v22 = 6;
  v10 = sub_180014580(a5, &v26);
  v11 = v26.m128i_i64[0];
  LastError = v10;
  if ( v10 >= 0 )
  {
    ProcessId = GetProcessId(a2);
    v23 = ProcessId;
    if ( ProcessId )
    {
      if ( (unsigned int)a4 > 5 )
      {
        LastError = -1073741582;
      }
      else
      {
        if ( a4 < 3 && ((v11 & 0x1C0) != 0 || (v11 & 0x200) != 0) || !a4 && (v11 & 0x400) != 0 )
        {
          LastError = -1073741776;
          goto LABEL_28;
        }
        v14 = sub_180014410(a1, ProcessId, a2, v25, &v24);
        v8 = v24;
        LastError = v14;
        if ( v14 >= 0 )
        {
          v15 = sub_180013F04(v24, a4, &v26, &v22);
          v9 = v22;
          LastError = v15;
          if ( v15 >= 0 )
          {
            if ( v22 < a4 )
            {
              sub_180012BB4(a1);
              if ( (*(_DWORD *)(a1 + 96) & 0x38u) >= 0x10 )
                sub_180012370(a1);
              sub_180013444(a1);
            }
            LastError = 0;
          }
        }
      }
      if ( v8 )
        sub_180013778(v8);
    }
    else if ( (int)GetLastError() > 0 )
    {
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else if ( v10 == -1073741811 )
  {
    LastError = -1073741581;
  }
LABEL_28:
  if ( (unsigned int)dword_180032000 > 4 && sub_1800010E0((__int64)&dword_180032000, 3LL) )
  {
    v25 = v26.m128i_i64[1];
    v22 = LastError;
    v20 = v9;
    v24 = v11;
    v21[0] = a4;
    sub_180001288(
      v16,
      byte_18002A6CA,
      v17,
      v18,
      (__int64)&v23,
      (__int64)v21,
      (__int64)&v24,
      (__int64)&v25,
      (__int64)&v20,
      (__int64)&v22);
  }
  return LastError;
}
