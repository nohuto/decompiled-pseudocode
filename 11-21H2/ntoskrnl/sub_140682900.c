/*
 * XREFs of sub_140682900 @ 0x140682900
 * Callers:
 *     sub_14066D0AC @ 0x14066D0AC (sub_14066D0AC.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     sub_14068214C @ 0x14068214C (sub_14068214C.c)
 *     sub_1406821D4 @ 0x1406821D4 (sub_1406821D4.c)
 *     sub_1406822EC @ 0x1406822EC (sub_1406822EC.c)
 *     sub_140682838 @ 0x140682838 (sub_140682838.c)
 *     sub_140682B74 @ 0x140682B74 (sub_140682B74.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 *     sub_140682D84 @ 0x140682D84 (sub_140682D84.c)
 *     sub_140682EA4 @ 0x140682EA4 (sub_140682EA4.c)
 *     sub_140683088 @ 0x140683088 (sub_140683088.c)
 */

__int64 __fastcall sub_140682900(char *Object, __int64 a2, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  char *EffectiveServerSilo; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  int v11; // ebx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx

  CurrentThread = KeGetCurrentThread();
  sub_140682C34(Object, CurrentThread, 0LL);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = (char *)PsGetEffectiveServerSilo((__int64)Object);
  }
  else
  {
    for ( EffectiveServerSilo = Object;
          EffectiveServerSilo;
          EffectiveServerSilo = (char *)*((_QWORD *)EffectiveServerSilo + 158) )
    {
      if ( (*((_DWORD *)EffectiveServerSilo + 64) & 0x1000) == 0
        && ((*((_DWORD *)EffectiveServerSilo + 64) & 0x800) == 0 || (a3 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == Object && (*((_DWORD *)EffectiveServerSilo + 378) & 0x40000000) == 0 )
    {
      v10 = -1073741790;
      goto LABEL_18;
    }
  }
  if ( !EffectiveServerSilo )
  {
    v10 = 0;
LABEL_18:
    sub_140682B74(Object, CurrentThread, 0LL);
    return (unsigned int)v10;
  }
  if ( !sub_14068214C((__int64)EffectiveServerSilo, 0LL, a2, 1) )
  {
    v10 = -1073741637;
    goto LABEL_18;
  }
  v10 = sub_1406821D4((__int64)EffectiveServerSilo, v8, v9, a3);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = sub_1406822EC(EffectiveServerSilo, a2, 0LL, 1u);
  if ( v10 < 0 )
    goto LABEL_18;
  sub_140682838((__int64)EffectiveServerSilo, 0LL, a2, a3);
  sub_140683088(EffectiveServerSilo, 0LL, a2);
  if ( (*((_DWORD *)EffectiveServerSilo + 378) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 2472);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2508), 0x1Fu);
  }
  sub_140682B74(Object, CurrentThread, 0LL);
  v11 = sub_140682EA4(a2);
  if ( v11 >= 0 && !(unsigned int)sub_140682D84(a2, 0LL, 0LL) )
    return (unsigned int)-1073741756;
  return (unsigned int)v11;
}
