/*
 * XREFs of SdbLoadString @ 0x1800966B8
 * Callers:
 *     SdbpGetRCIDStringCopy @ 0x180096E1C (SdbpGetRCIDStringCopy.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbLoadString(HMODULE hModule, unsigned __int16 a2, unsigned __int16 **a3)
{
  char v4; // bl
  __int64 v7; // rdi
  HRSRC ResourceW; // rax
  HGLOBAL Resource; // rax
  unsigned __int16 *v10; // rax
  unsigned __int16 *v11; // rcx
  int i; // ebx
  unsigned __int16 *v13; // rcx

  v4 = a2;
  if ( a3 )
  {
    LODWORD(v7) = 0;
    ResourceW = FindResourceW(hModule, (LPCWSTR)((a2 >> 4) + 1), (LPCWSTR)6);
    if ( ResourceW )
    {
      Resource = LoadResource(hModule, ResourceW);
      if ( Resource )
      {
        v10 = (unsigned __int16 *)LockResource(Resource);
        if ( v10 )
        {
          v7 = *v10;
          v11 = v10 + 1;
          for ( i = v4 & 0xF; i; --i )
          {
            v13 = &v11[v7];
            v7 = *v13;
            v11 = v13 + 1;
          }
          *a3 = v11;
        }
      }
    }
    return (unsigned int)v7;
  }
  else
  {
    AslLogCallPrintf(1, (unsigned int)"SdbLoadString", 144, (unsigned int)"LoadStringOrError: lpBuffer == NULL");
    return 0LL;
  }
}
