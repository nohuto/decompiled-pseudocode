/*
 * XREFs of ValidateAcpiIdleDomain @ 0x1C0037F40
 * Callers:
 *     InitAcpiIdleDomain @ 0x1C00294D4 (InitAcpiIdleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0009A08 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C0009AF8 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall ValidateAcpiIdleDomain(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  unsigned int *v4; // rdi
  int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  int v11; // [rsp+20h] [rbp-38h]

  v2 = *a1;
  v3 = 0;
  v4 = (unsigned int *)a2;
  v6 = 0;
  if ( *a1 )
  {
LABEL_2:
    if ( a1[6 * v6 + 1] == 6 )
    {
      if ( a1[6 * v6 + 4] != 254 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, 0LL, 0x15u, v11);
        return (unsigned int)-1073741637;
      }
      v7 = a1[6 * v6 + 5];
      if ( v7 > 0x800 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v9 = 22;
      }
      else
      {
        if ( v7 )
        {
          v8 = *v4;
          if ( a1[6 * v6 + 6] < (unsigned int)v8 )
          {
            LODWORD(a2) = 0;
            while ( v6 == (_DWORD)a2 || a1[6 * v6 + 6] != a1[6 * (unsigned int)a2 + 6] )
            {
              a2 = (unsigned int)(a2 + 1);
              if ( (unsigned int)a2 >= v2 )
              {
                if ( ++v6 < v2 )
                  goto LABEL_2;
                return v3;
              }
            }
            return (unsigned int)-1073741637;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_DDDD((__int64)WPP_GLOBAL_Control->DeviceExtension, v8, 0LL, (__int64)a1, v11);
          return (unsigned int)-1073741823;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v9 = 23;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v9 = 20;
    }
    WPP_RECORDER_SF_ddd((__int64)WPP_GLOBAL_Control->DeviceExtension, a2, 0LL, v9, v11);
    return (unsigned int)-1073741823;
  }
  return v3;
}
