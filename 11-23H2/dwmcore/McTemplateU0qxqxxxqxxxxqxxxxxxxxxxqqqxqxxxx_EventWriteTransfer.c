/*
 * XREFs of McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer @ 0x180130C98
 * Callers:
 *     ?Trace@CFrameInfo@@QEAAXK_K0@Z @ 0x180046C30 (-Trace@CFrameInfo@@QEAAXK_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 */

__int64 __fastcall McTemplateU0qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        __int64 a31,
        __int64 a32,
        __int64 a33)
{
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v35[65]; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+270h] [rbp+170h] BYREF
  __int64 v37; // [rsp+278h] [rbp+178h] BYREF

  v37 = a4;
  v36 = a3;
  v34 = 1;
  v35[3] = &v36;
  a33 = 0LL;
  v35[5] = &v37;
  v35[7] = &a5;
  v35[9] = &a6;
  v35[11] = &a7;
  v35[13] = &a8;
  v35[15] = &v34;
  v35[17] = &a10;
  v35[19] = &a11;
  v35[21] = &a12;
  v35[23] = &a13;
  v35[25] = &a14;
  v35[27] = &a15;
  v35[29] = &a16;
  v35[31] = &a17;
  v35[33] = &a18;
  v35[35] = &a19;
  v35[37] = &a20;
  v35[39] = &a21;
  v35[41] = &a22;
  v35[43] = &a23;
  v35[45] = &a24;
  v35[47] = &a25;
  v35[49] = &a26;
  v35[51] = &a27;
  a32 = 0LL;
  v35[0] = 0LL;
  v35[4] = 4LL;
  v35[6] = 8LL;
  v35[8] = 4LL;
  v35[10] = 8LL;
  v35[12] = 8LL;
  v35[14] = 8LL;
  v35[16] = 4LL;
  v35[18] = 8LL;
  v35[20] = 8LL;
  v35[22] = 8LL;
  v35[24] = 8LL;
  v35[26] = 4LL;
  v35[28] = 8LL;
  v35[30] = 8LL;
  v35[32] = 8LL;
  v35[34] = 8LL;
  v35[36] = 8LL;
  v35[38] = 8LL;
  v35[40] = 8LL;
  v35[42] = 8LL;
  v35[44] = 8LL;
  v35[46] = 8LL;
  v35[48] = 4LL;
  v35[50] = 4LL;
  v35[52] = 4LL;
  v35[53] = &a28;
  v35[54] = 8LL;
  v35[55] = &a29;
  v35[56] = 4LL;
  v35[57] = &a30;
  v35[58] = 8LL;
  v35[59] = v35;
  v35[61] = &a32;
  v35[63] = &a33;
  v35[60] = 8LL;
  v35[62] = 8LL;
  v35[64] = 8LL;
  return McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_FRAMEINFO);
}
