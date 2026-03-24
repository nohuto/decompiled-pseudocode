/*
 * XREFs of KeyboardClassReadCopyData @ 0x1C0005278
 * Callers:
 *     KeyboardClassRead @ 0x1C0001AE0 (KeyboardClassRead.c)
 *     KeyboardClassServiceCallback @ 0x1C0005680 (KeyboardClassServiceCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001480 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C00023A0 (WPP_RECORDER_SF_qqL.c)
 *     memmove @ 0x1C0002F40 (memmove.c)
 *     WPP_RECORDER_SF_qqLL @ 0x1C0006988 (WPP_RECORDER_SF_qqLL.c)
 *     WPP_RECORDER_SF_qqLqq @ 0x1C0006BFC (WPP_RECORDER_SF_qqLqq.c)
 *     WPP_RECORDER_SF_qqqql @ 0x1C00072CC (WPP_RECORDER_SF_qqqql.c)
 */

__int64 __fastcall KeyboardClassReadCopyData(__int64 a1, _QWORD *a2, int a3, int a4)
{
  __int64 v6; // r13
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // edx
  unsigned int v10; // r12d
  char *v11; // r14
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  char *v15; // r14
  unsigned int v16; // r15d
  unsigned int v17; // edx
  bool v18; // zf
  __int64 result; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]

  ++*(_DWORD *)(a1 + 184);
  v6 = a2[23];
  v7 = *(_DWORD *)(v6 + 8);
  v8 = 12 * *(_DWORD *)(a1 + 84);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLL(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
  if ( v8 >= v7 )
    v8 = v7;
  v9 = *(_DWORD *)(a1 + 104) + *(_DWORD *)(a1 + 140) - *(_DWORD *)(a1 + 120);
  v10 = v9;
  if ( v8 < v9 )
    v10 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqL((__int64)WPP_GLOBAL_Control->DeviceExtension, 5u, 3u, 0x2Au, v20);
  v11 = (char *)a2[3];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqLqq(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      a3,
      43,
      v20,
      *(_QWORD *)a1,
      (char)a2,
      v10,
      *(_QWORD *)(a1 + 120),
      a2[3]);
  memmove(v11, *(const void **)(a1 + 120), v10);
  v15 = &v11[v10];
  v16 = v8 - v10;
  if ( v8 == v10 )
  {
    *(_QWORD *)(a1 + 120) += v10;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqLqq(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        v13,
        44,
        v20,
        *(_QWORD *)a1,
        (char)a2,
        v16,
        *(_QWORD *)(a1 + 104),
        (char)v15);
    memmove(v15, *(const void **)(a1 + 104), v16);
    *(_QWORD *)(a1 + 120) = v16 + *(_QWORD *)(a1 + 104);
  }
  v17 = v8 / 0xC;
  v18 = *(_DWORD *)(a1 + 84) == v8 / 0xC;
  *(_DWORD *)(a1 + 84) -= v8 / 0xC;
  if ( v18 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, 3u, 0x2Du, v20);
    *(_BYTE *)(a1 + 361) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qqqql(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v13,
      v14,
      v20,
      *(_QWORD *)a1,
      (char)a2,
      *(_QWORD *)(a1 + 112),
      *(_QWORD *)(a1 + 120),
      *(_DWORD *)(a1 + 84));
  a2[7] = v8;
  result = 0LL;
  *(_DWORD *)(v6 + 8) = v8;
  return result;
}
