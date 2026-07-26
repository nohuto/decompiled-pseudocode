/*
 * XREFs of ??1?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00D0128
 * Callers:
 *     CreateKModule @ 0x1C0141180 (CreateKModule.c)
 * Callees:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1C00D0184 (--_GKModule@@QEAAPEAXI@Z.c)
 */

void *__fastcall wistd::unique_ptr<KModule,wistd::default_delete<KModule>>::~unique_ptr<KModule,wistd::default_delete<KModule>>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return KModule::`scalar deleting destructor'(result, 1u);
  return result;
}
