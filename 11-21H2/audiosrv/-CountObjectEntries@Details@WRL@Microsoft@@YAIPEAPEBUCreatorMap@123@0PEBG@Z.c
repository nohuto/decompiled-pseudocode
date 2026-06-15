/*
 * XREFs of ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x18005B968
 * Callers:
 *     ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x18005B6B4 (--$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z.c)
 *     ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800C592C (-UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::CountObjectEntries(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const struct Microsoft::WRL::Details::CreatorMap **a3,
        const unsigned __int16 *a4)
{
  unsigned int v4; // r9d
  char *i; // rcx
  char *v9; // rax
  char *v10; // r10
  int v11; // r8d
  int v12; // edx

  v4 = 0;
  for ( i = (char *)this + 8; i < (char *)a2; i += 8 )
  {
    if ( *(_QWORD *)i )
    {
      if ( !a3 )
        goto LABEL_4;
      v9 = *(char **)(*(_QWORD *)i + 32LL);
      if ( v9 )
      {
        v10 = (char *)((char *)a3 - v9);
        do
        {
          v11 = *(unsigned __int16 *)&v10[(_QWORD)v9];
          v12 = *(unsigned __int16 *)v9 - v11;
          if ( v12 )
            break;
          v9 += 2;
        }
        while ( v11 );
        if ( !v12 )
LABEL_4:
          ++v4;
      }
    }
  }
  return v4;
}
