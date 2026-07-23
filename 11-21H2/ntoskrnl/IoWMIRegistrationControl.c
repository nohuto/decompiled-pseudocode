/*
 * XREFs of IoWMIRegistrationControl @ 0x1406C8220
 * Callers:
 *     sub_140611730 @ 0x140611730 (sub_140611730.c)
 *     sub_1408565CC @ 0x1408565CC (sub_1408565CC.c)
 *     sub_140A834A0 @ 0x140A834A0 (sub_140A834A0.c)
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 *     sub_140B22C40 @ 0x140B22C40 (sub_140B22C40.c)
 * Callees:
 *     sub_140248854 @ 0x140248854 (sub_140248854.c)
 *     sub_1402E0164 @ 0x1402E0164 (sub_1402E0164.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_14045F87C @ 0x14045F87C (sub_14045F87C.c)
 *     sub_1406C81D4 @ 0x1406C81D4 (sub_1406C81D4.c)
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_140810420 @ 0x140810420 (sub_140810420.c)
 *     sub_140810B00 @ 0x140810B00 (sub_140810B00.c)
 */

NTSTATUS __stdcall IoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, ULONG Action)
{
  char v2; // r14
  ULONG v4; // eax
  ULONG v5; // eax
  NTSTATUS v6; // ebx
  ULONG v8; // eax
  ULONG v10; // eax
  ULONG v11; // eax
  __int64 v12; // rbx

  v2 = 0;
  if ( qword_140C164D8 )
  {
    v4 = Action & 0x7FFFFFFF;
    if ( (Action & 0x80000000) == 0 )
      v4 = Action;
    if ( (v4 & 0x10000) != 0 )
    {
      v2 = 1;
      v4 &= 0xFF0EFFFF;
    }
    v5 = v4 - 1;
    if ( !v5 )
    {
      v6 = sub_1406C82F8(DeviceObject);
      if ( v2 )
        sub_140810B00(DeviceObject);
      return v6;
    }
    v8 = v5 - 1;
    if ( !v8 )
      return sub_140810420(DeviceObject);
    v10 = v8 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          return -1073741811;
        v12 = sub_140248854((__int64)DeviceObject);
        if ( !v12 )
          return -1073741811;
        sub_14045F87C();
        _InterlockedOr((volatile signed __int32 *)(v12 + 48), 0x20000000u);
        KeReleaseMutex(&Object, 0);
        sub_1402E0164(v12);
        return 0;
      }
      return sub_1406C81D4((__int64)DeviceObject);
    }
    else
    {
      v6 = sub_140810420(DeviceObject);
      if ( v6 < 0 )
        return v6;
      return sub_1406C82F8(DeviceObject);
    }
  }
  return -1073741823;
}
