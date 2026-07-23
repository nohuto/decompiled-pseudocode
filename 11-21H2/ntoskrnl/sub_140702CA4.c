/*
 * XREFs of sub_140702CA4 @ 0x140702CA4
 * Callers:
 *     sub_140702420 @ 0x140702420 (sub_140702420.c)
 * Callees:
 *     sub_140294A38 @ 0x140294A38 (sub_140294A38.c)
 *     sub_1402956D0 @ 0x1402956D0 (sub_1402956D0.c)
 *     sub_140297D10 @ 0x140297D10 (sub_140297D10.c)
 *     sub_140299280 @ 0x140299280 (sub_140299280.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406F8640 @ 0x1406F8640 (sub_1406F8640.c)
 *     sub_140702C3C @ 0x140702C3C (sub_140702C3C.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

char sub_140702CA4()
{
  struct _KTHREAD *CurrentThread; // r14
  int v1; // ecx
  __int64 v2; // rsi
  unsigned int v3; // r12d
  _QWORD *v4; // rax
  int v5; // ebx
  SIZE_T v6; // r15
  unsigned __int64 v7; // rax
  void *v8; // rsp
  int v9; // r9d
  _CONTEXT *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  PCONTEXT v13; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  int v18; // [rsp+30h] [rbp+0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp+4h] BYREF
  __int64 v20; // [rsp+40h] [rbp+10h]
  __int64 v21; // [rsp+48h] [rbp+18h] BYREF
  PCONTEXT Source; // [rsp+50h] [rbp+20h]
  struct _KTHREAD *v23; // [rsp+58h] [rbp+28h]
  ULONG_PTR v24[3]; // [rsp+60h] [rbp+30h] BYREF
  int v25; // [rsp+78h] [rbp+48h]
  _DWORD v26[31]; // [rsp+7Ch] [rbp+4Ch] BYREF
  _QWORD v27[154]; // [rsp+100h] [rbp+D0h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(Size, 0, sizeof(Size));
  v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v23 = CurrentThread;
  v1 = *((_DWORD *)CurrentThread + 29) & 0x100000;
  v2 = v1 != 0 ? 0x800 : 0;
  v20 = v2;
  v3 = v1 != 0 ? 1048667 : 1048603;
  LODWORD(v4) = sub_1402956D0(v3, Size, (unsigned int)v2);
  v5 = (int)v4;
  if ( (int)v4 >= 0 )
  {
    v6 = Size[0];
    v7 = Size[0] + 15LL;
    if ( v7 <= Size[0] )
      v7 = 0xFFFFFFFFFFFFFF0LL;
    v8 = alloca(v7 & 0xFFFFFFFFFFFFFFF0uLL);
    Source = (PCONTEXT)&v18;
    memset(&v18, 0, Size[0]);
    LODWORD(v4) = sub_140297D10((__int64)&v18, v3, &Size[1], v2);
    v5 = (int)v4;
    if ( (int)v4 >= 0 )
    {
      memset(v27, 0, sizeof(v27));
      --*((_WORD *)CurrentThread + 243);
      sub_1406F8640(CurrentThread, 1, 1);
      LOBYTE(v9) = 1;
      LODWORD(v4) = sub_1407045D0((_DWORD)CurrentThread, (unsigned int)&v18, 0, v9, 0);
      v5 = (int)v4;
      v18 = (int)v4;
      if ( (int)v4 >= 0 )
      {
        v10 = (_CONTEXT *)((*(_QWORD *)&v26[19] - v6) & 0xFFFFFFFFFFFFFFF0uLL);
        v27[19] = (char *)v10 - 40;
        sub_140702C3C((__int64)v27, 0, qword_140D07168, (__int64)v10, (__int64)off_140D3B180[0][4]);
        v11 = *(_QWORD *)(*((_QWORD *)CurrentThread + 23) + 984LL);
        if ( v11 )
        {
          v27[25] = v27[31];
          v27[31] = v11;
        }
        v12 = (__int64)v10;
        if ( v6 - 1 > 0xFFE )
        {
          ProbeForWrite(v10, v6, 0x10u);
        }
        else
        {
          if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
            v12 = 0x7FFFFFFF0000LL;
          *(_BYTE *)v12 = *(_BYTE *)v12;
          *(_BYTE *)(v12 + v6 - 1) = *(_BYTE *)(v12 + v6 - 1);
        }
        LODWORD(v4) = sub_140297D10((__int64)v10, v3, &v21, v20);
        v5 = (int)v4;
        v18 = (int)v4;
        if ( (int)v4 >= 0 )
        {
          v13 = Source;
          LODWORD(v4) = RtlCopyContext(v10, v3, Source);
          v5 = (int)v4;
          v18 = (int)v4;
          if ( (int)v4 >= 0 )
            LOBYTE(v4) = (unsigned __int8)sub_140294A38(v13->Rip);
        }
        if ( v5 >= 0 )
        {
          LODWORD(v4) = sub_1407043D0(CurrentThread, 2);
          v5 = (int)v4;
        }
      }
    }
  }
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    v4 = (_QWORD *)((char *)CurrentThread + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v5 < 0 )
  {
    v24[2] = qword_140D07168;
    v24[0] = (unsigned int)v5;
    v25 = 0;
    v24[1] = 0LL;
    v15 = *((_QWORD *)CurrentThread + 5);
    v16 = v15;
    if ( (*(_QWORD *)(v15 + 8) & 1LL) != 0 )
    {
      do
        v16 = *(_QWORD *)(v16 + 40);
      while ( (*(_BYTE *)(v16 + 8) & 1) != 0 );
    }
    if ( (*(_QWORD *)(v15 + 8) & 1LL) != 0 )
    {
      do
        v15 = *(_QWORD *)(v15 + 40);
      while ( (*(_BYTE *)(v15 + 8) & 1) != 0 );
    }
    LOBYTE(v4) = sub_140299280((NTSTATUS *)v24, v15 - 720, v16 - 400, 1u, 0);
  }
  return (char)v4;
}
