/*
 * XREFs of RtlStringCopyWorkerW @ 0x180007F70
 * Callers:
 *     ?RtlStringCbCatNW@@YAJPEAG_KPEBG1@Z @ 0x180007EF8 (-RtlStringCbCatNW@@YAJPEAG_KPEBG1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW(char *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // r10d
  __int64 v4; // rax
  signed __int64 v5; // r9
  __int16 v6; // dx

  v2 = a2;
  v3 = 0;
  if ( a2 )
  {
    v4 = 66LL;
    v5 = (char *)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\HostActivityManager" - a1;
    while ( v4 )
    {
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
      {
        if ( !v2 )
          goto LABEL_6;
        break;
      }
      *(_WORD *)a1 = v6;
      --v4;
      a1 += 2;
      if ( !--v2 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    a1 -= 2;
    v3 = -2147483643;
  }
  *(_WORD *)a1 = 0;
  return v3;
}
