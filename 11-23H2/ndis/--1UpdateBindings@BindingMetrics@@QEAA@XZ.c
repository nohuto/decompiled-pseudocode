/*
 * XREFs of ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x1C0022090
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135AC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0023444 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 */

void __fastcall BindingMetrics::UpdateBindings::~UpdateBindings(BindingMetrics::UpdateBindings *this)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp-19h] BYREF
  unsigned __int64 v5; // [rsp+38h] [rbp-11h] BYREF
  _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-9h] BYREF
  __int64 v7; // [rsp+60h] [rbp+17h]
  int v8; // [rsp+68h] [rbp+1Fh]
  int v9; // [rsp+6Ch] [rbp+23h]
  unsigned __int64 *v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  __int64 *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  if ( *((_BYTE *)this + 17) && (unsigned int)dword_1C00F41D8 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 32LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v15 = 0;
      v12 = 0;
      v9 = 0;
      v5 = KStopwatch::Stop((BindingMetrics::UpdateBindings *)((char *)this + 24));
      v2 = *(_QWORD *)this + 4008LL;
      v13 = &v4;
      v7 = v2;
      v14 = 8;
      v10 = &v5;
      v11 = 8;
      v3 = *((_QWORD *)this + 1);
      v8 = 16;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C00F41D8, (int)&dword_1C00DFB5A, v3, 0, 5u, &v6);
    }
  }
}
