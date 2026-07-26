/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___ @ 0x1C011AA28
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C011B8C4 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C002BF10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ??1?$unique_ptr@$$BY0A@PEAU_MDL@@U?$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00B16B8 (--1-$unique_ptr@$$BY0A@PEAU_MDL@@U-$default_delete@$$BY0A@PEAU_MDL@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ?AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z @ 0x1C011CCCC (-AddStaticProtocolBinding@BindStack@Ndis@@QEAAJPEB_W@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C012176C (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_e7cfcc3f3a6a3b9bada4f20c4517f5e3___lambda_d0aabbab13d03fe2b2b867a1fab03655___(
        HANDLE *a1,
        __int64 a2,
        unsigned int *a3,
        Ndis::BindStack *a4)
{
  HANDLE v7; // rcx
  _BYTE *v8; // rbx
  _BYTE *v9; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rax
  const wchar_t *v12; // rbp
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  const wchar_t *v16; // rdi
  NTSTATUS v17; // ebp
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  _BYTE *Pool2; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v7 = *a1;
  v8 = 0LL;
  ResultLength = 0;
  Pool2 = 0LL;
  v9 = KeyValueInformation;
  v10 = ZwQueryValueKey(
          v7,
          (PUNICODE_STRING)&Ndis::ProtocolListValueName,
          KeyValuePartialInformation,
          KeyValueInformation,
          0x100u,
          &ResultLength);
  if ( v10 != -2147483643 )
  {
    if ( v10 >= 0 )
      goto LABEL_3;
    v17 = v10;
LABEL_23:
    wistd::unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>::~unique_ptr<_MDL * [0],wistd::default_delete<_MDL * [0]>>((void **)&Pool2);
    return (unsigned int)v17;
  }
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, ResultLength, 2052287565);
  v8 = Pool2;
  if ( !Pool2 )
    goto LABEL_31;
  v17 = ZwQueryValueKey(
          *a1,
          (PUNICODE_STRING)&Ndis::ProtocolListValueName,
          KeyValuePartialInformation,
          Pool2,
          ResultLength,
          &ResultLength);
  if ( v17 < 0 )
    goto LABEL_23;
  v9 = v8;
LABEL_3:
  if ( *((_DWORD *)v9 + 1) != 7 )
  {
    v17 = -1073741788;
    goto LABEL_23;
  }
  v11 = *((unsigned int *)v9 + 2);
  if ( (v11 & 1) != 0 )
  {
    v17 = -1073741811;
    goto LABEL_23;
  }
  v12 = (const wchar_t *)(v9 + 12);
  v13 = v9 + 12;
  v14 = (unsigned __int64)&v9[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v9 + 12) >= v14 )
  {
LABEL_32:
    v17 = -1073741789;
    goto LABEL_23;
  }
LABEL_6:
  if ( *v13 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)++v13 >= v14 )
        goto LABEL_32;
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_6;
        goto LABEL_32;
      }
    }
  }
  if ( v15 > 0x80 )
  {
    v17 = -1073740757;
    goto LABEL_23;
  }
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
          a3,
          v15) )
  {
LABEL_31:
    v17 = -1073741670;
    goto LABEL_23;
  }
  while ( 1 )
  {
    if ( !*v12 )
    {
      v17 = 0;
      goto LABEL_23;
    }
    v16 = v12;
    do
      ++v16;
    while ( *v16 );
    v17 = Ndis::BindStack::AddStaticProtocolBinding(a4, v12);
    if ( v17 < 0 )
      break;
    v12 = v16 + 1;
  }
  if ( v8 )
    operator delete[](v8);
  return (unsigned int)v17;
}
