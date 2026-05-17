/*
 * XREFs of RtlpFindNextActivationContextSection @ 0x1800463B8
 * Callers:
 *     RtlFindActivationContextSectionGuid @ 0x180045080 (RtlFindActivationContextSectionGuid.c)
 *     RtlFindActivationContextSectionString @ 0x180045CB0 (RtlFindActivationContextSectionString.c)
 * Callees:
 *     RtlpLocateActivationContextSection @ 0x180046540 (RtlpLocateActivationContextSection.c)
 */

__int64 __fastcall RtlpFindNextActivationContextSection(__int64 a1, int a2, __int64 a3, __int64 *a4)
{
  struct _TEB *v4; // r13
  const char *ActivationContextData; // rdi
  __int64 ActivationContext; // rbx
  _PEB *ProcessEnvironmentBlock; // r15
  unsigned int v11; // ecx
  int v12; // esi
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // rax
  __int64 result; // rax
  int v15; // eax
  int v16; // [rsp+68h] [rbp+10h]

  v16 = a2;
  v4 = NtCurrentTeb();
  ActivationContextData = 0LL;
  ActivationContext = 0LL;
  ProcessEnvironmentBlock = v4->ProcessEnvironmentBlock;
  if ( a4 )
    *a4 = 0LL;
  v11 = *(_DWORD *)(a1 + 20);
  v12 = 2;
  while ( 1 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
      {
LABEL_7:
        ActivationContextData = (const char *)ProcessEnvironmentBlock->ActivationContextData;
        ActivationContext = 0LL;
        if ( ActivationContextData )
        {
          *(_DWORD *)(a1 + 20) = 2;
          goto LABEL_15;
        }
      }
      else if ( v11 != 2 )
      {
LABEL_13:
        if ( v11 > 3 )
          return 3221225701LL;
        goto LABEL_14;
      }
      ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      ActivationContext = -4LL;
      if ( ActivationContextData )
      {
        *(_DWORD *)(a1 + 20) = 3;
        goto LABEL_15;
      }
      goto LABEL_13;
    }
    ActivationContextStackPointer = v4->ActivationContextStackPointer;
    if ( !ActivationContextStackPointer || !ActivationContextStackPointer->ActiveFrame )
      goto LABEL_7;
    ActivationContext = (__int64)ActivationContextStackPointer->ActiveFrame->ActivationContext;
    if ( ActivationContext )
    {
      if ( ActivationContext == -4 )
      {
        ActivationContextData = (const char *)ProcessEnvironmentBlock->SystemDefaultActivationContextData;
      }
      else
      {
        if ( ActivationContext == -3 )
        {
          ActivationContextData = "Actx ";
          goto LABEL_30;
        }
        ActivationContextData = *(const char **)(ActivationContext + 24);
      }
    }
    if ( !ActivationContextData )
      goto LABEL_7;
LABEL_30:
    *(_DWORD *)(a1 + 20) = 1;
LABEL_14:
    if ( !ActivationContextData )
      return 3222601729LL;
LABEL_15:
    result = RtlpLocateActivationContextSection(
               (_DWORD)ActivationContextData,
               *(_QWORD *)(a1 + 8),
               *(_DWORD *)(a1 + 16),
               a2,
               a3);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1072365567 )
      return result;
    v11 = *(_DWORD *)(a1 + 20);
    if ( v11 == 3 )
      return result;
    a2 = v16;
  }
  v15 = 0;
  if ( ActivationContext != -4 )
    v12 = 0;
  LOBYTE(v15) = ActivationContext == 0;
  *(_DWORD *)(a1 + 24) = v15 | v12;
  if ( a4 )
  {
    if ( ActivationContext == -4 )
      ActivationContext = 0LL;
    *a4 = ActivationContext;
  }
  return 0LL;
}
