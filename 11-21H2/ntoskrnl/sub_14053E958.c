/*
 * XREFs of sub_14053E958 @ 0x14053E958
 * Callers:
 *     sub_1402ACA10 @ 0x1402ACA10 (sub_1402ACA10.c)
 *     sub_1402ACA70 @ 0x1402ACA70 (sub_1402ACA70.c)
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

char sub_14053E958()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  __int64 (__fastcall *v2)(int, int, int, int, __int64, __int64, __int64); // rax
  ULONGLONG v3; // rdx
  const GUID *ActivityId; // r10
  __int64 v5; // r11
  unsigned __int8 v6; // r9
  __int16 *v7; // rdx
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // r8
  char *v12; // rdx
  char v13; // al
  char v14; // r8
  char v15; // cl
  __int64 v16; // rax
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v19; // [rsp+50h] [rbp-B0h]
  __int64 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  char *v23; // [rsp+80h] [rbp-80h]
  int v24; // [rsp+88h] [rbp-78h]
  int v25; // [rsp+8Ch] [rbp-74h]
  __int64 *v26; // [rsp+90h] [rbp-70h]
  _QWORD v27[5]; // [rsp+98h] [rbp-68h]
  PVOID Callers[10]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v29[10]; // [rsp+110h] [rbp+10h] BYREF

  memset(Callers, 0, sizeof(Callers));
  memset(v29, 0, sizeof(v29));
  v0 = 10LL;
  RtlWalkFrameChain(Callers, 0xAu, 0);
  v1 = 0LL;
  do
  {
    v2 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64))Callers[v1];
    if ( (char *)v2 >= qword_140D068F0 && (unsigned __int64)v2 <= qword_140D06AD8 )
    {
      v2 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64))((char *)v2
                                                                                 - (unsigned __int64)qword_140D068F0);
      v29[v1] = v2;
    }
    ++v1;
    --v0;
  }
  while ( v0 );
  if ( (unsigned int)dword_140C03868 > 5 )
  {
    LOBYTE(v2) = sub_1402A2000((__int64)&dword_140C03868, 0x400000000000LL);
    if ( (_BYTE)v2 )
    {
      v20 = v5;
      v26 = &v20;
      v27[0] = 8LL;
      v27[1] = v29;
      v27[3] = &v21;
      *(_DWORD *)&EventDescriptor.Level = 5;
      UserData.Ptr = (ULONGLONG)off_140C03870;
      v27[2] = 80LL;
      v21 = 0x1000000LL;
      v27[4] = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = v3;
      UserData.Size = *(unsigned __int16 *)off_140C03870;
      v23 = byte_140028E6C;
      UserData.Reserved = 2;
      v24 = 93;
      v25 = v5;
      v19 = (unsigned int)byte_14003714D - (unsigned int)qword_140028268;
      v2 = sub_14085D310;
      if ( (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64))qword_140C03890 == sub_14085D310 )
      {
        v6 = (unsigned __int8)ActivityId;
        v7 = &word_140028E6E;
        do
        {
          v8 = *(_BYTE *)v7;
          v7 = (__int16 *)((char *)v7 + v5);
        }
        while ( v8 < 0 );
        do
        {
          v9 = *(_BYTE *)v7;
          v7 = (__int16 *)((char *)v7 + v5);
        }
        while ( v9 );
        if ( v7 >= (__int16 *)&byte_140028EC9 )
          goto LABEL_25;
        do
        {
          do
          {
            v10 = *(_BYTE *)v7;
            v7 = (__int16 *)((char *)v7 + v5);
          }
          while ( v10 );
          v11 = *(_BYTE *)v7;
          v12 = (char *)v7 + v5;
          if ( v11 >= 0 )
            break;
          v13 = *v12;
          v14 = v11 & 0x7F;
          v7 = (__int16 *)&v12[v5];
          if ( v13 >= 0 )
            break;
          while ( 1 )
          {
            v15 = *(_BYTE *)v7;
            if ( *(char *)v7 >= 0 )
              break;
            if ( v15 != (char)0x80 )
              goto LABEL_23;
            v7 = (__int16 *)((char *)v7 + v5);
          }
          if ( v14 != 9 )
            break;
          if ( (unsigned __int8)(v15 - 113) > 2u )
            break;
          v16 = v6;
          v6 += v5;
          BYTE5(v27[2 * v16]) = v15;
        }
        while ( v7 < (__int16 *)&byte_140028EC9 );
LABEL_23:
        if ( v6 )
          LOBYTE(v2) = sub_1402A1AEC(
                         (__int64)&dword_140C03868,
                         (__int128 *)&EventDescriptor,
                         5u,
                         (__int64)&UserData,
                         v6);
        else
LABEL_25:
          LOBYTE(v2) = EtwWriteEx(qword_140C03888, &EventDescriptor, 0LL, 0, ActivityId, ActivityId, 5u, &UserData);
      }
    }
  }
  return (char)v2;
}
