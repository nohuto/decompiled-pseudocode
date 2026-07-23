/*
 * XREFs of ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x140860CFC
 * Callers:
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     sub_14098B5B8 @ 0x14098B5B8 (sub_14098B5B8.c)
 *     sub_14098B868 @ 0x14098B868 (sub_14098B868.c)
 *     sub_14098BADC @ 0x14098BADC (sub_14098BADC.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_14036AAF4 @ 0x14036AAF4 (sub_14036AAF4.c)
 *     sub_14036B86C @ 0x14036B86C (sub_14036B86C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall CMSPAddress::get_DynamicTerminalClasses(CMSPAddress *this, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 *v4; // rbx
  void *v5; // rax
  void *v6; // rsi
  __int64 v7; // r14
  unsigned __int64 *Pool2; // rax
  char *v9; // r10
  char *v10; // r11
  char *v11; // r12
  unsigned __int16 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  int v16; // ecx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v18; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v20; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int16 v21; // [rsp+40h] [rbp-C0h] BYREF
  BOOL v22; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  CMSPAddress *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  BOOL *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  CMSPAddress **v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int16 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int16 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  __int16 *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  __int16 *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  int v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+DCh] [rbp-24h]
  char *v41; // [rsp+E0h] [rbp-20h]
  int v42; // [rsp+E8h] [rbp-18h]
  int v43; // [rsp+ECh] [rbp-14h]
  char *v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  char *v47; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ch] [rbp+Ch]

  v22 = 0;
  v4 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0LL;
  v17 = 0;
  v24 = 0LL;
  if ( byte_140C5AE14 )
  {
    if ( EtwEventEnabled(RegHandle, a2) )
    {
      v5 = sub_14036B86C(*(_QWORD *)(*((_QWORD *)this + 4) + 48LL), 0x67446F50u);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_QWORD *)(*((_QWORD *)v5 + 39) + 40LL);
        if ( v7 )
        {
          sub_14036AAF4(*((_QWORD *)this + 3), 0LL, &v23);
          Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, v23, 1346721364LL);
          v4 = Pool2;
          if ( Pool2 )
          {
            if ( (int)sub_14036AAF4(*((_QWORD *)this + 3), Pool2, &v23) >= 0 )
            {
              v9 = (char *)v4 + v4[2];
              v10 = (char *)v4 + v4[3];
              v11 = (char *)v4 + v4[4];
              v12 = v23 - *((_WORD *)v4 + 16);
              v13 = -1LL;
              v21 = v12;
              v14 = -1LL;
              do
                ++v14;
              while ( *(_WORD *)&v9[2 * v14] );
              v19 = v14;
              do
                ++v13;
              while ( *(_WORD *)&v10[2 * v13] );
              v20 = v13;
              v15 = *((_BYTE *)this + 17) == 0;
              v18 = *(_WORD *)(v7 + 128) >> 1;
              v24 = this;
              v22 = !v15;
              v17 = *((_BYTE *)this + 16);
              UserData.Ptr = (ULONGLONG)&v17;
              v26 = &v22;
              v28 = &v24;
              v30 = &v18;
              v32 = &v19;
              v34 = &v20;
              v36 = (__int16 *)&v21;
              *(_QWORD *)&UserData.Size = 1LL;
              v27 = 4LL;
              v29 = 8LL;
              v31 = 2LL;
              v33 = 2LL;
              v35 = 2LL;
              v37 = 2LL;
              v16 = *(unsigned __int16 *)(v7 + 128);
              v38 = *(_QWORD *)(v7 + 136);
              v39 = v16;
              v42 = 2 * (unsigned __int16)v14;
              v40 = 0;
              v45 = 2 * (unsigned __int16)v13;
              v48 = v12;
              v41 = v9;
              v43 = 0;
              v44 = v10;
              v46 = 0;
              v47 = v11;
              v49 = 0;
              EtwWrite(RegHandle, a2, 0LL, 0xBu, &UserData);
            }
          }
        }
        ObfDereferenceObjectWithTag(v6, 0x67446F50u);
        if ( v4 )
          ExFreePoolWithTag(v4, 0x50455654u);
      }
    }
  }
}
