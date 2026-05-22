/*
 * XREFs of ?IsIdentityTransform@CInputTransform@@SA_NAEBUtagINPUT_TRANSFORM@@@Z @ 0x1800F9C84
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification@@_N@Z @ 0x1800FA1AC (-ProcessInputMessage@Win32kInterop@@AEAAXAEBUInputMessageContext@1@AEBU_InputMessageNotification.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInputTransform::IsIdentityTransform(const struct tagINPUT_TRANSFORM *a1)
{
  return *(float *)a1 == 1.0
      && *((float *)a1 + 1) == 0.0
      && *((float *)a1 + 2) == 0.0
      && *((float *)a1 + 3) == 0.0
      && *((float *)a1 + 4) == 0.0
      && *((float *)a1 + 5) == 1.0
      && *((float *)a1 + 6) == 0.0
      && *((float *)a1 + 7) == 0.0
      && *((float *)a1 + 8) == 0.0
      && *((float *)a1 + 9) == 0.0
      && *((float *)a1 + 10) == 1.0
      && *((float *)a1 + 11) == 0.0
      && *((float *)a1 + 12) == 0.0
      && *((float *)a1 + 13) == 0.0
      && *((float *)a1 + 14) == 0.0
      && *((float *)a1 + 15) == 1.0;
}
