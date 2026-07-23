/*
 * XREFs of sub_14075D814 @ 0x14075D814
 * Callers:
 *     sub_14075D4B8 @ 0x14075D4B8 (sub_14075D4B8.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140783CD8 @ 0x140783CD8 (sub_140783CD8.c)
 */

__int64 __fastcall sub_14075D814(__int64 a1, char *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 *i; // rdx
  int v9; // r10d
  int v10; // ecx
  unsigned __int16 *v11; // rax
  _DWORD *v12; // rbx

  v4 = 0;
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v5 = sub_140783CD8(a1, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 56;
    for ( i = *(__int64 **)(v5 + 56); i != (__int64 *)v7; i = (__int64 *)*i )
    {
      if ( (i[2] & 1) != 0 )
      {
        v12 = (_DWORD *)i[11];
        v11 = (unsigned __int16 *)a2;
        do
        {
          v9 = *(unsigned __int16 *)((char *)v11 + (char *)(v12 + 1) - a2);
          v10 = *v11 - v9;
          if ( v10 )
            break;
          ++v11;
        }
        while ( v9 );
        if ( !v10 && v4 <= *v12 + *((_DWORD *)i + 18) )
          v4 = *v12 + *((_DWORD *)i + 18);
      }
    }
    sub_1407838E0(&off_140C037C0, v6);
  }
  KeReleaseMutex(&Object, 0);
  return v4;
}
