/*
 * XREFs of sub_140859BF8 @ 0x140859BF8
 * Callers:
 *     sub_140B27838 @ 0x140B27838 (sub_140B27838.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140781F40 @ 0x140781F40 (sub_140781F40.c)
 */

__int64 sub_140859BF8()
{
  int v0; // r8d
  char v1; // cl
  char v3; // al
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+34h] [rbp-CCh] BYREF
  int v6; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v7[28]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v7, 0, sizeof(v7));
  LODWORD(v7[6]) = 0;
  LODWORD(v7[13]) = 0;
  LODWORD(v7[20]) = 0;
  v6 = (unsigned __int8)byte_140D0190A;
  v4 = (unsigned __int8)byte_140C097C5;
  v5 = (unsigned __int8)byte_140C0C6C8;
  v7[2] = L"PassiveIntRealTimeWorkerCount";
  v7[3] = &v4;
  v7[5] = &v4;
  v7[9] = L"PassiveIntRealTimeWorkerPriority";
  v7[10] = &v5;
  v7[12] = &v5;
  v7[16] = L"PassiveIntForceCriticalWorker";
  v7[17] = &v6;
  LODWORD(v7[1]) = 288;
  LODWORD(v7[4]) = 67108868;
  LODWORD(v7[8]) = 288;
  LODWORD(v7[11]) = 67108868;
  LODWORD(v7[15]) = 288;
  LODWORD(v7[18]) = 67108868;
  v7[19] = &v6;
  v0 = sub_140781F40(2, L"Session Manager\\I/O System", (__int64)v7, 0LL);
  if ( v0 >= 0 )
  {
    if ( (_BYTE)v4 )
    {
      v1 = v4;
      if ( (unsigned __int8)v4 > 0x10u )
        v1 = 16;
      byte_140C097C5 = v1;
    }
    if ( (unsigned __int8)v5 > 0x10u )
    {
      v3 = v5;
      if ( (unsigned __int8)v5 > 0x15u )
        v3 = 21;
      byte_140C0C6C8 = v3;
    }
  }
  return (unsigned int)v0;
}
