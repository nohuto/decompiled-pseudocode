/*
 * XREFs of ?StringCchCopyA@@YGJPADIPBD@Z @ 0x10002185
 * Callers:
 *     ?GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z @ 0x100027FA (-GetModuleInformation@details@wil@@YG_NPAXPAIPADI@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge StringCchCopyA@<eax>(int a1@<edx>, _BYTE *a2@<ecx>, char *a3, unsigned int a4, const char *a5)
{
  int v5; // esi
  char *v6; // edi
  char v7; // al
  int result; // eax

  if ( a1 <= 0 )
  {
    result = -2147024809;
    if ( !a1 )
      return result;
  }
  else
  {
    v5 = 2147483646 - a1;
    v6 = (char *)(a3 - a2);
    while ( v5 + a1 )
    {
      v7 = a2[(_DWORD)v6];
      if ( v7 )
      {
        *a2++ = v7;
        if ( --a1 )
          continue;
      }
      if ( !a1 )
        --a2;
      break;
    }
    result = a1 != 0 ? 0 : -2147024774;
  }
  *a2 = 0;
  return result;
}
