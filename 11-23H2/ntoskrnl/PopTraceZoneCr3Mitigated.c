/*
 * XREFs of PopTraceZoneCr3Mitigated @ 0x140596598
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403A1A34 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x14098B210 (PopThermalZoneRemove.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E64 (_tlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1402F6E74 (_tlgCreate1Sz_wchar_t.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

void *__fastcall PopTraceZoneCr3Mitigated(int a1, __int64 a2)
{
  void *result; // rax
  void *v5; // rbx
  __int64 v6; // r9
  const size_t *v7; // rdx
  int v8; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+48h] [rbp-9h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  int *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  _BYTE v17[16]; // [rsp+88h] [rbp+37h] BYREF

  result = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x67446F50u);
  v5 = result;
  if ( result )
  {
    if ( *(_QWORD *)(*((_QWORD *)result + 39) + 40LL) && (unsigned int)dword_140C03950 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C03950, 0x400000000000LL) )
      {
        v13 = 0;
        v16 = 0;
        v11 = &v8;
        v9 = *(_DWORD *)(a2 + 128);
        v12 = 4;
        v15 = 4;
        v7 = *(const size_t **)(v6 + 136);
        v14 = &v9;
        v8 = a1;
        tlgCreate1Sz_wchar_t((__int64)v17, v7);
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03950,
          (unsigned __int8 *)byte_14002F069,
          0LL,
          0LL,
          5u,
          &v10);
      }
    }
    return (void *)ObfDereferenceObjectWithTag(v5, 0x67446F50u);
  }
  return result;
}
