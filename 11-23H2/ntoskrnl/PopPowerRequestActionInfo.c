/*
 * XREFs of PopPowerRequestActionInfo @ 0x1407A5EB4
 * Callers:
 *     NtPowerInformation @ 0x140784110 (NtPowerInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PopPowerRequestReferenceRelease @ 0x14032B6B8 (PopPowerRequestReferenceRelease.c)
 *     PopPowerRequestReferenceAcquire @ 0x14032BAB8 (PopPowerRequestReferenceAcquire.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406E6330 (ObpReferenceObjectByHandleWithTag.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1407A5DD0 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140981B00 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981BDC (PopPowerRequestSpecialRequestSet.c)
 */

__int64 __fastcall PopPowerRequestActionInfo(__int64 a1)
{
  char PreviousMode; // bp
  ULONG_PTR v3; // rcx
  int IsAppContainerOrIdentifyLevelContext; // ebx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  int v7; // eax
  char v9; // [rsp+60h] [rbp+8h] BYREF
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = *(_QWORD *)a1;
  Object = 0LL;
  v9 = 0;
  IsAppContainerOrIdentifyLevelContext = ObpReferenceObjectByHandleWithTag(
                                           v3,
                                           0,
                                           PopPowerRequestObjectType,
                                           PreviousMode,
                                           0x72506F50u,
                                           &Object,
                                           0LL,
                                           0LL);
  if ( IsAppContainerOrIdentifyLevelContext >= 0 )
  {
    v5 = Object;
    if ( *(_DWORD *)(a1 + 8) == 3 )
    {
      if ( PreviousMode )
      {
        IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, &v9);
        if ( IsAppContainerOrIdentifyLevelContext >= 0 )
        {
          if ( !v9 )
            goto LABEL_6;
          IsAppContainerOrIdentifyLevelContext = -1073741790;
        }
LABEL_10:
        ObfDereferenceObjectWithTag(v5, 0x72506F50u);
        return (unsigned int)IsAppContainerOrIdentifyLevelContext;
      }
    }
    else if ( *(_DWORD *)(a1 + 8) == 4 && PreviousMode != 1 )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741637;
      goto LABEL_10;
    }
LABEL_6:
    v6 = *(unsigned int *)(a1 + 8);
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( v5[152] )
        v7 = PopPowerRequestSpecialRequestSet(v5, v6, *(_QWORD *)(a1 + 16));
      else
        v7 = PopPowerRequestReferenceAcquire(v5, v6);
    }
    else if ( v5[152] )
    {
      v7 = PopPowerRequestSpecialRequestClear(v5, v6);
    }
    else
    {
      v7 = PopPowerRequestReferenceRelease(v5, v6);
    }
    IsAppContainerOrIdentifyLevelContext = v7;
    goto LABEL_10;
  }
  return (unsigned int)IsAppContainerOrIdentifyLevelContext;
}
