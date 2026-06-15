/*
 * XREFs of ?SerializeEventHeaderFromEndpointMap@CPlaybackNotifier@@AEAAXPEADK@Z @ 0x180039A84
 * Callers:
 *     ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x1800399D0 (-PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPlaybackNotifier::SerializeEventHeaderFromEndpointMap(CPlaybackNotifier *this, char *a2)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d
  __int64 *j; // rax
  __int64 *v6; // rdx
  __int64 **v7; // rcx
  __int64 *i; // rcx
  __int64 v9; // rcx
  __int64 *v10; // rdx

  *(_DWORD *)a2 = 1;
  v3 = 0;
  v4 = 8;
  j = (__int64 *)**((_QWORD **)this + 10);
  while ( !*((_BYTE *)j + 25) )
  {
    v6 = j + 4;
    if ( *((_DWORD *)j + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)j[7] >= 8 )
        v6 = (__int64 *)*v6;
      v9 = v4;
      v4 += 112;
      ++v3;
      *(_OWORD *)&a2[v9] = *(_OWORD *)v6;
      *(_OWORD *)&a2[v9 + 16] = *((_OWORD *)v6 + 1);
      *(_OWORD *)&a2[v9 + 32] = *((_OWORD *)v6 + 2);
      *(_OWORD *)&a2[v9 + 48] = *((_OWORD *)v6 + 3);
      *(_OWORD *)&a2[v9 + 64] = *((_OWORD *)v6 + 4);
      *(_OWORD *)&a2[v9 + 80] = *((_OWORD *)v6 + 5);
      *(_OWORD *)&a2[v9 + 96] = *((_OWORD *)v6 + 6);
    }
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v10 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v10 + 25); v10 = (__int64 *)*v10 )
        j = v10;
    }
  }
  *((_DWORD *)a2 + 1) = v3;
}
