/*
 * XREFs of ?GetIids@SendCommandAsyncOperation@Devices@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1400843F0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@V?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@6@@Details@WRL@Microsoft@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x140031E50 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::SendCommandAsyncOperation::GetIids(
        Windows::Media::Devices::SendCommandAsyncOperation *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_2e1f3d72_a58d_5b0a_b42d_3660c04cfeeb;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_00000036_0000_0000_c000_000000000046;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
