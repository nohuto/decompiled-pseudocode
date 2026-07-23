/*
 * XREFs of PnpQueryRemoveLockedDeviceNode @ 0x140959338
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140868668 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x140208A00 (RtlAppendUnicodeStringToString.c)
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     RtlCopyUnicodeString @ 0x1402AF260 (RtlCopyUnicodeString.c)
 *     PipSetDevNodeUserFlags @ 0x1407908AC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407935D0 (PipClearDevNodeUserFlags.c)
 *     IopRemoveDevice @ 0x140869BA8 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D31C (PiIrpQueryRemoveDevice.c)
 */

__int64 __fastcall PnpQueryRemoveLockedDeviceNode(__int64 a1, _DWORD *a2, UNICODE_STRING *a3)
{
  struct _DEVICE_OBJECT *v6; // rbp
  int v7; // esi
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x305:
    case 0x306:
    case 0x308:
    case 0x309:
    case 0x30A:
      PipSetDevNodeUserFlags(a1, 512);
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 32);
      v7 = PiIrpQueryRemoveDevice(v6);
      if ( v7 < 0 )
      {
        IopRemoveDevice(v6, 3);
        *a2 = 6;
        RtlCopyUnicodeString(a3, (PCUNICODE_STRING)(a1 + 40));
      }
      else
      {
        PipSetDevNodeState(a1, 786);
      }
      PipClearDevNodeUserFlags(a1, 512);
      result = (unsigned int)v7;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
