/*
 * XREFs of ?SearchProcessHidRequest@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESSINFO@@GGPEAK@Z @ 0x1C00AEDCC
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00AE358 (_RegisterRawInputDevices.c)
 *     DestroyThreadHidObjects @ 0x1C01028F0 (DestroyThreadHidObjects.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequest(
        struct tagPROCESSINFO *a1,
        __int16 a2,
        __int16 a3,
        unsigned int *a4)
{
  __int64 v4; // r10
  struct tagPROCESS_HID_REQUEST *result; // rax

  v4 = *((_QWORD *)a1 + 104);
  if ( !v4 )
    return 0LL;
  for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 16);
        result != (struct tagPROCESS_HID_REQUEST *)(v4 + 16);
        result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
    {
      if ( result )
      {
        *a4 = 1;
        return result;
      }
      break;
    }
  }
  if ( !a3 )
  {
    for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 32);
          result != (struct tagPROCESS_HID_REQUEST *)(v4 + 32);
          result = *(struct tagPROCESS_HID_REQUEST **)result )
    {
      if ( *((_WORD *)result + 8) == a2 )
      {
        if ( !result )
          break;
        *a4 = 2;
        return result;
      }
    }
  }
  for ( result = *(struct tagPROCESS_HID_REQUEST **)(v4 + 48); ; result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( result == (struct tagPROCESS_HID_REQUEST *)(v4 + 48) )
      goto LABEL_10;
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
      break;
  }
  if ( !result )
  {
LABEL_10:
    *a4 = 0;
    return 0LL;
  }
  *a4 = 3;
  return result;
}
