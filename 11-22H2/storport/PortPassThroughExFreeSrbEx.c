/*
 * XREFs of PortPassThroughExFreeSrbEx @ 0x1C00786C4
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C00A1DE0 (PortPassThroughExSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughExFreeSrbEx(unsigned int *P)
{
  __int64 v1; // rax
  char *v3; // rdx
  int v4; // eax
  void *v5; // rcx

  v1 = P[30];
  if ( (_DWORD)v1 )
  {
    v3 = (char *)P + v1;
    v4 = *(unsigned int *)((char *)P + v1);
    if ( v4 == 64 || v4 == 65 )
    {
      v5 = (void *)*((_QWORD *)v3 + 2);
    }
    else
    {
      if ( v4 != 66 )
        goto LABEL_10;
      v5 = (void *)*((_QWORD *)v3 + 3);
    }
    if ( v3[9] && v5 )
      ExFreePoolWithTag(v5, 0x69506C50u);
  }
LABEL_10:
  ExFreePoolWithTag(P, 0x69506C50u);
}
