/*
 * XREFs of ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140062534
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140062844 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 */

int __fastcall CSubmixImpl::CreateFormatConverterPipe(CSubmixImpl *this, struct tWAVEFORMATEX *a2, __int64 a3)
{
  int v3; // eax
  struct IDeviceGraphObjectCache *v5; // rdx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  struct tWAVEFORMATEX *v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  v8 = *((_QWORD *)this + 27);
  v11 = *((_QWORD *)this + 1);
  v3 = *((_DWORD *)this + 64);
  v10 = a3;
  v9 = a2;
  v5 = (struct IDeviceGraphObjectCache *)*((_QWORD *)this + 33);
  v7 = v3;
  return CFormatConverterPipe::Initialize(
           (CSubmixImpl *)((char *)this + 272),
           v5,
           a2,
           (const struct FORMAT_CONVERTER_PIPE_DESCRIPTOR *)&v7);
}
