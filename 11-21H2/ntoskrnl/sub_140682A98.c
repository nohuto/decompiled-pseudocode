/*
 * XREFs of sub_140682A98 @ 0x140682A98
 * Callers:
 *     sub_14066F440 @ 0x14066F440 (sub_14066F440.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     sub_140682B74 @ 0x140682B74 (sub_140682B74.c)
 *     sub_140682C34 @ 0x140682C34 (sub_140682C34.c)
 */

__int64 __fastcall sub_140682A98(__int64 a1, __int16 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  __int64 v9; // rax

  v5 = 0;
  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  sub_140682C34(a1, CurrentThread, 0LL);
  if ( (a2 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1264) )
    {
      if ( (*(_DWORD *)(EffectiveServerSilo + 256) & 0x1000) == 0
        && ((*(_DWORD *)(EffectiveServerSilo + 256) & 0x800) == 0 || (a2 & 1) == 0) )
      {
        break;
      }
    }
    if ( (a2 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1512) & 0x40000000) == 0 )
    {
      v5 = -1073741790;
      goto LABEL_11;
    }
  }
  if ( EffectiveServerSilo )
  {
    v9 = *(_QWORD *)(EffectiveServerSilo + 1752);
    if ( v9 == -1 )
    {
      v5 = -1073740682;
    }
    else
    {
      if ( v9 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(EffectiveServerSilo + 1752), 0x624A7350u);
        v9 = *(_QWORD *)(EffectiveServerSilo + 1752);
      }
      *a3 = v9;
    }
  }
LABEL_11:
  sub_140682B74(a1, CurrentThread, 0LL);
  return v5;
}
