/*
 * XREFs of CrmRegistrationNotifyWindowClosedReasonChange @ 0x180007154
 * Callers:
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180003BDC (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmActivityStart @ 0x18002B870 (CrmActivityStart.c)
 *     CrmActivityUpdate @ 0x180038DE4 (CrmActivityUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRegistrationNotifyWindowClosedReasonChange(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  __int64 result; // rax
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // eax
  int v13; // [rsp+30h] [rbp-79h] BYREF
  int v14; // [rsp+34h] [rbp-75h] BYREF
  int v15; // [rsp+38h] [rbp-71h] BYREF
  int v16; // [rsp+3Ch] [rbp-6Dh] BYREF
  int v17; // [rsp+40h] [rbp-69h] BYREF
  __int64 v18; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-59h] BYREF
  UUID *v20; // [rsp+70h] [rbp-39h]
  int v21; // [rsp+78h] [rbp-31h]
  int v22; // [rsp+7Ch] [rbp-2Dh]
  int *v23; // [rsp+80h] [rbp-29h]
  int v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+8Ch] [rbp-1Dh]
  __int64 v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+9Ch] [rbp-Dh]
  int *v29; // [rsp+A0h] [rbp-9h]
  int v30; // [rsp+A8h] [rbp-1h]
  int v31; // [rsp+ACh] [rbp+3h]
  __int64 *v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  int *v35; // [rsp+C0h] [rbp+17h]
  int v36; // [rsp+C8h] [rbp+1Fh]
  int v37; // [rsp+CCh] [rbp+23h]
  int *v38; // [rsp+D0h] [rbp+27h]
  int v39; // [rsp+D8h] [rbp+2Fh]
  int v40; // [rsp+DCh] [rbp+33h]

  v2 = 0LL;
  if ( *(_DWORD *)(a2 + 64) == 17 )
  {
    v7 = 255;
    v13 = 255;
    if ( !*(_DWORD *)(a2 + 108) )
    {
LABEL_20:
      result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, &v13, 4LL, 0LL);
      v2 = &v13;
      goto LABEL_3;
    }
    v8 = *(_QWORD *)(a2 + 112);
    v9 = *(unsigned int *)(a2 + 108);
    v10 = (_DWORD *)(v8 + 32);
    while ( 1 )
    {
      if ( v10[4] )
      {
        switch ( *v10 )
        {
          case 7:
            v7 &= ~1u;
            break;
          case 9:
            v7 &= ~2u;
            break;
          case 0x10:
            v7 &= ~4u;
            break;
          case 0x13:
            v7 &= ~8u;
            break;
          case 0x14:
            v7 &= ~0x10u;
            break;
          case 0x15:
            v7 &= ~0x20u;
            break;
          case 0x16:
            v7 &= ~0x40u;
            break;
          case 0x1A:
            v7 &= ~0x80u;
            break;
          default:
            goto LABEL_19;
        }
        v13 = v7;
      }
LABEL_19:
      v10 += 14;
      if ( !--v9 )
        goto LABEL_20;
    }
  }
  result = RtlPublishWnfStateData(*(_QWORD *)(a2 + 152), 0LL, 0LL, 0LL, 0LL);
LABEL_3:
  v6 = result;
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 2) != 0 )
  {
    result = qword_1800DB268 & 2;
    if ( result == qword_1800DB268 )
    {
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v31 = 0;
      v34 = 0;
      v20 = &Uuid;
      v14 = *(_DWORD *)(a1 + 24);
      v23 = &v14;
      v26 = a1 + 72;
      v11 = *(unsigned __int8 *)(a1 + 73);
      v21 = 16;
      v24 = 4;
      v30 = 4;
      v33 = 8;
      v27 = 4 * v11 + 8;
      v15 = *(_DWORD *)(a2 + 64);
      v29 = &v15;
      v18 = *(_QWORD *)(a2 + 56);
      v32 = &v18;
      if ( v2 )
        v12 = *v2;
      else
        v12 = 0;
      v37 = 0;
      v40 = 0;
      v16 = v12;
      v17 = v6;
      v35 = &v16;
      v36 = 4;
      v38 = &v17;
      v39 = 4;
      return tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB250, (int)&dword_1800BEBD4, 0, 0, 9u, &v19);
    }
  }
  return result;
}
